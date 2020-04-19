	{"basemap", "psbasemap", "core", "Plot base maps and frames", ">X},>DA@AD)"},
	{"begin", "begin", "core", "Initiate a new GMT modern mode session", ""},
	{"blockmean", "blockmean", "core", "Block average (x,y,z) data tables by mean estimation", "<D{,>D},GG),A->"},
	{"blockmedian", "blockmedian", "core", "Block average (x,y,z) data tables by median estimation", "<D{,>D},GG),A->"},
	{"blockmode", "blockmode", "core", "Block average (x,y,z) data tables by mode estimation", "<D{,>D},GG),A->"},
	{"clear", "clear", "core", "Delete current default settings, or the cache, data or sessions directories", ""},
	{"clip", "psclip", "core", "Initialize or terminate polygonal clip paths", "<D{,>X},C-("},
	{"coast", "pscoast", "core", "Plot continents, countries, shorelines, rivers, and borders", ">?}"},
	{"colorbar", "psscale", "core", "Plot gray scale or color scale bar", "CC{,>X},ZD("},
	{"contour", "pscontour", "core", "Contour table data by direct triangulation", "<D{,AD)=t,CC(,ED(,DDD,G?(=1,>X}@<D{,AD)=t,CC(,ED(,DD),G?(=1"},
	{"dimfilter", "dimfilter", "core", "Directional filtering of grids in the space domain", "<G{,GG},>DQ"},
	{"docs", "docs", "core", "Show HTML documentation of specified module", ""},
	{"end", "end", "core", "Terminate GMT modern mode session and produce optional graphics", ""},
	{"events", "psevents", "core", "Plot event symbols and labels for a moment in time", "<D{,CC(,>X}"},
	{"figure", "figure", "core", "Set attributes for the current modern mode session figure", ""},
	{"filter1d", "filter1d", "core", "Time domain filtering of 1-D data tables", "<D{,>D},FD(1"},
	{"fitcircle", "fitcircle", "core", "Find mean position and great [or small] circle fit to points on sphere", "<D{,>D},>DF"},
	{"gmt2kml", "gmt2kml", "core", "Convert GMT data table to Google Earth KML file", "<D{,>D},CC("},
	{"gmtconnect", "gmtconnect", "core", "Connect individual lines whose end points match within tolerance", "<D{,>D},CD),LD),QD)"},
	{"gmtconvert", "gmtconvert", "core", "Convert, paste, or extract columns from data tables", "<D{,>D}"},
	{"gmtdefaults", "gmtdefaults", "core", "List current GMT default settings", ""},
	{"gmtget", "gmtget", "core", "Get individual GMT default settings", ">D}"},
	{"gmtinfo", "gmtinfo", "core", "Get information about data tables", "<D{,>D}"},
	{"gmtlogo", "gmtlogo", "core", "Plot the GMT logo", ">X}"},
	{"gmtmath", "gmtmath", "core", "Reverse Polish Notation (RPN) calculator for data tables", "<D(,AD(=,TD(,>D}"},
	{"gmtread", "gmtread", "core", "Read GMT objects into external API", "-T-,<?{,>?}"},
	{"gmtregress", "gmtregress", "core", "Linear regression of 1-D data sets", "<D{,>D}"},
	{"gmtselect", "gmtselect", "core", "Select data table subsets based on multiple spatial criteria", "<D{,CD(=,FD(,LD(=,>D},GG("},
	{"gmtset", "gmtset", "core", "Change individual GMT default settings", ""},
	{"gmtsimplify", "gmtsimplify", "core", "Line reduction using the Douglas-Peucker algorithm", "<D{,>D}"},
	{"gmtspatial", "gmtspatial", "core", "Geospatial operations on points, lines and polygons", "<D{,DD(=f,ND(=,TD(,>D}"},
	{"gmtvector", "gmtvector", "core", "Operations on Cartesian vectors in 2-D and 3-D", "<D{,>D}"},
	{"gmtwhich", "gmtwhich", "core", "Find full path to specified files", ">D}"},
	{"gmtwrite", "gmtwrite", "core", "Write GMT objects from external API", "-T-,<?{,>?}"},
	{"grd2cpt", "grd2cpt", "core", "Make linear or histogram-equalized color palette table from grid", "<G{+,>C}"},
	{"grd2kml", "grd2kml", "core", "Create KML image quadtree from single grid", "<G{,CC(,IG(,WD("},
	{"grd2xyz", "grd2xyz", "core", "Convert grid to data table", "<G{+,>D}"},
	{"grdblend", "grdblend", "core", "Blend several partially overlapping grids into one larger grid", "<G{+,GG}"},
	{"grdclip", "grdclip", "core", "Clip the range of grid values", "<G{,GG}"},
	{"grdcontour", "grdcontour", "core", "Make contour map using a grid", "<G{,AD)=t,CC(,DDD,>X},G?(=1@<G{,AD)=t,CC(,DD),G?(=1"},
	{"grdconvert", "grdconvert", "core", "Convert between different grid formats", "<G{,>G}"},
	{"grdcut", "grdcut", "core", "Extract subregion from a grid", "<G{,GG}"},
	{"grdedit", "grdedit", "core", "Modify header or content of a grid", "<G{,ND(,GG}"},
	{"grdfft", "grdfft", "core", "Mathematical operations on grids in the spectral domain", "<G{+,GG},GDE"},
	{"grdfill", "grdfill", "core", "Interpolate across holes in a grid", "<G{,>G}"},
	{"grdfilter", "grdfilter", "core", "Filter a grid in the space (or time) domain", "<G{,FG(=1,GG}"},
	{"grdgdal", "grdgdal", "core", "Execute GDAL raster programs from GMT", "<?{,GG}"},
	{"grdgradient", "grdgradient", "core", "Compute directional gradients from a grid", "<G{,AG(,GG},SG)"},
	{"grdhisteq", "grdhisteq", "core", "Perform histogram equalization for a grid", "<G{,GG},DD)"},
	{"grdimage", "grdimage", "core", "Project and plot grids or images", "<G{+,CC(,IG(,>X},>IA,<ID@<G{+,CC(,IG(,AI),<ID"},
	{"grdinfo", "grdinfo", "core", "Extract information from grids", "<G{+,>D}"},
	{"grdinterpolate", "grdinterpolate", "core", "Interpolate 2-D grids or 1-D series from a 3-D data cube", "<G{+,>?}"},
	{"grdlandmask", "grdlandmask", "core", "Create a \"wet-dry\" mask grid from shoreline data base", "GG}"},
	{"grdmask", "grdmask", "core", "Create mask grid from polygons or point coverage", "<D{,GG}"},
	{"grdmath", "grdmath", "core", "Reverse Polish Notation (RPN) calculator for grids (element by element)", "<G(,=G}"},
	{"grdpaste", "grdpaste", "core", "Join two grids along their common edge", "<G{2,GG}"},
	{"grdproject", "grdproject", "core", "Forward and inverse map transformation of grids", "<G{,GG}"},
	{"grdsample", "grdsample", "core", "Resample a grid onto a new lattice", "<G{,GG}"},
	{"grdtrack", "grdtrack", "core", "Sample grids at specified (x,y) locations", "<D{,DD),E-<,GG(,>D},SD)=s"},
	{"grdtrend", "grdtrend", "core", "Fit trend surface to grids and compute residuals", "<G{,DG),TG),WG(,WG)"},
	{"grdvector", "grdvector", "core", "Plot vector field from two component grids", "<G{2,CC(,>X}"},
	{"grdview", "grdview", "core", "Create 3-D perspective image or surface mesh from a grid", "<G{,CC(,GG(,IG(,>X}"},
	{"grdvolume", "grdvolume", "core", "Calculate grid volume and area constrained by a contour", "<G{,>D}"},
	{"greenspline", "greenspline", "core", "Interpolate using Green's functions for splines in 1-3 dimensions", "<D{,AD(=,ED),ND(,TG(,CD)=f,G?},GDN"},
	{"histogram", "pshistogram", "core", "Calculate and plot histograms", "<D{,CC(,>X},>D),>DI@<D{,ID)"},
	{"image", "psimage", "core", "Plot raster or EPS images", "<I{,>X}"},
	{"inset", "inset", "core", "Manage figure inset setup and completion", ">X}"},
	{"kml2gmt", "kml2gmt", "core", "Extract GMT table data from Google Earth KML files", ">D}"},
	{"legend", "pslegend", "core", "Plot a legend", "<D{,>X}"},
	{"makecpt", "makecpt", "core", "Make GMT color palette tables", ">C},ED(,SD(,TD(,<D("},
	{"mapproject", "mapproject", "core", "Forward and inverse map transformations, datum conversions and geodesy", "<D{,LD(=,>D},W-("},
	{"mask", "psmask", "core", "Clip or mask map areas with no data table coverage", "<D{,DDD,C-(,>X},LG)@<D{,DD),C-(,LG)"},
	{"movie", "movie", "core", "Create animation sequences and movies", "<D("},
	{"nearneighbor", "nearneighbor", "core", "Grid table data using a \"Nearest neighbor\" algorithm", "<D{,GG}"},
	{"plot", "psxy", "core", "Plot lines, polygons, and symbols in 2-D", "<D{,CC(,T-<,S?(=2,ZD(=,>X}"},
	{"plot3d", "psxyz", "core", "Plot lines, polygons, and symbols in 3-D", "<D{,CC(,T-<,S?(=2,ZD(=,>X}"},
	{"project", "project", "core", "Project data onto lines or great circles, or generate tracks", "<D{,>D},G-("},
	{"psconvert", "psconvert", "core", "Convert [E]PS file(s) to other formats using Ghostscript", "<X{+,FI)"},
	{"rose", "psrose", "core", "Plot a polar histogram (rose, sector, windrose diagrams)", "<D{,CC(,ED(,>X},>D),>DI@<D{,ID),CC("},
	{"sample1d", "sample1d", "core", "Resample 1-D table data using splines", "<D{,ND(,TD(,>D}"},
	{"solar", "pssolar", "core", "Plot day-light terminators and other sunlight parameters", ">X},>DI,>DM@ID),MD)"},
	{"spectrum1d", "spectrum1d", "core", "Compute auto- [and cross-] spectra from one [or two] time series", "<D{,>D},T-)"},
	{"sph2grd", "sph2grd", "core", "Compute grid from spherical harmonic coefficients", "<D{,GG}"},
	{"sphdistance", "sphdistance", "core", "Create Voronoi distance, node, or natural nearest-neighbor grid on a sphere", "<D{,ND(,QD(,GG},Q-("},
	{"sphinterpolate", "sphinterpolate", "core", "Spherical gridding in tension of data on a sphere", "<D{,GG}"},
	{"sphtriangulate", "sphtriangulate", "core", "Delaunay or Voronoi construction of spherical data", "<D{,>D},ND)"},
	{"splitxyz", "splitxyz", "core", "Split xyz[dh] data tables into individual segments", "<D{,>D}"},
	{"subplot", "subplot", "core", "Manage modern mode figure subplot configuration and selection", ""},
	{"surface", "surface", "core", "Grid table data using adjustable tension continuous curvature splines", "<D{,DD(=,LG(,GG}"},
	{"ternary", "psternary", "core", "Plot data on ternary diagrams", "<D{,>X},>DM,C-(@<D{,MD),C-("},
	{"text", "pstext", "core", "Plot or typeset text", "<D{,>X}"},
	{"trend1d", "trend1d", "core", "Fit [weighted] [robust] polynomial/Fourier model for y = f(x) to xy[w] data", "<D{,>D}"},
	{"trend2d", "trend2d", "core", "Fit [weighted] [robust] polynomial for z = f(x,y) to xyz[w] data", "<D{,>D}"},
	{"triangulate", "triangulate", "core", "Delaunay triangulation or Voronoi partitioning and gridding of Cartesian data", "<D{,CG(,>D},GG)"},
	{"wiggle", "pswiggle", "core", "Plot z = f(x,y) anomalies along tracks", "<D{,>X}"},
	{"xyz2grd", "xyz2grd", "core", "Convert data table to a grid", "<D{,SD),GG}"},
