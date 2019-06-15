#!/usr/bin/env bash
#
#
# Copyright (c) 2012-2019 by the GMT Team (https://www.generic-mapping-tools.org/team.html)
# See LICENSE.TXT file for copying and redistribution conditions.
#
# This script just makes the include snippet gmt_enum_dict.h
# needed for GMT_API_Enum () to work.
#
egrep -v 'struct|union|enum|_GMT|define|char' gmt_resources.h | tr ',' ' ' | awk '{if (substr($1,1,4) == "GMT_") print $1, $3}' > /tmp/junk1.txt
grep -v GMT_OPT_ /tmp/junk1.txt > /tmp/junk2.txt
grep GMT_OPT_ /tmp/junk1.txt | awk '{print $1, substr($2,1,2)} '> /tmp/junk3.txt
while read key value; do
	printf "%s %d\n" $key "$value" >> /tmp/junk2.txt
done < /tmp/junk3.txt
n=`gmt info -Fd -o2 /tmp/junk2.txt`
COPY_YEAR=$(date +%Y)
NOW=$(date +%d-%B-%Y)
cat << EOF > gmt_enum_dict.h
/*--------------------------------------------------------------------
 *
 *      Copyright (c) 1991-$COPY_YEAR by the GMT Team (https://www.generic-mapping-tools.org/team.html)
 *      See LICENSE.TXT file for copying and redistribution conditions.
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU Lesser General Public License as published by
 *      the Free Software Foundation; version 3 or any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU Lesser General Public License for more details.
 *
 *      Contact info: www.generic-mapping-tools.org
 *--------------------------------------------------------------------*/

/*
 * Include file for getting GMT API enum codes programmatically via GMT_API_enum ()
 * Rerun gmt_make_enum_dicts.sh after adding or changing enums.
 *
 * Author:      Paul Wessel
 * Date:        $NOW
 * Version:     6 API
 */

struct GMT_API_DICT {
	char name[32];
	int value;
};

#define GMT_N_API_ENUMS $n

GMT_LOCAL struct GMT_API_DICT gmt_api_enums[GMT_N_API_ENUMS] = {
EOF

sort -k 1 /tmp/junk2.txt | awk '{printf "\t{\"%s\", %d},\n", $1, $2}' >> gmt_enum_dict.h
cat << EOF >> gmt_enum_dict.h
};
EOF
printf "gmt_make_enum_dicts.sh: Found %d enums set in gmt_resources.h. Updated gmt_enum_dict.h\n" $n

rm -f /tmp/junk?.txt
