/*
 * MATLAB Compiler: 4.8 (R2008a)
 * Date: Sat Mar 12 20:30:06 2016
 * Arguments: "-B" "macro_default" "-o" "ATM" "-W" "WinMain:ATM" "-d"
 * "C:\xampp\htdocs\ATM\FaceReg\ATM\src" "-T" "link:exe" "-v"
 * "C:\xampp\htdocs\ATM\FaceReg\login.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\1.jpg" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\10.pgm" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\DATABASE.mat" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\facerec.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\facerectrain.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\gendata.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\getcam.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\index.php" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\login.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\mainmenu.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\menu1.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\passwordlog.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\Read Me.txt" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\testsys.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\Untitled1.prj" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\Untitled2.prj" 
 */

#include "mclmcrrt.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_ATM_session_key[] = {
    '6', '3', '1', 'D', '3', '4', 'E', 'E', '1', 'A', '4', 'F', 'C', '7', '9',
    '2', '2', '3', 'B', '4', 'F', '2', '7', '2', '7', 'A', '3', '5', 'B', '7',
    'E', 'F', '7', 'B', 'A', '1', '8', '9', 'E', 'C', '2', '4', '4', '1', '6',
    '6', '1', '9', '3', '0', '5', '6', 'B', 'D', '3', '3', 'E', 'C', '3', '3',
    'C', 'A', 'B', '2', '4', '9', 'E', '4', '7', 'F', '0', 'C', 'D', '6', '4',
    'A', 'F', '8', '9', '4', '8', 'E', '2', '9', '0', '8', '9', '7', '9', 'A',
    'E', '0', '5', '2', '9', 'F', '6', '0', 'D', '3', 'B', '9', '0', 'C', '4',
    '8', '1', 'C', '1', '2', 'D', 'C', '1', '9', 'F', '8', '3', 'D', 'F', '5',
    '5', '4', '3', '3', '6', '0', 'A', '3', 'F', 'B', '3', '4', 'F', '2', 'F',
    '7', '1', 'F', '3', 'E', '7', 'C', '0', '1', '4', 'D', 'A', '2', 'D', '9',
    'A', 'F', 'D', 'A', 'A', '8', '9', 'D', '8', 'E', 'F', '4', '7', '0', '0',
    '5', '7', '3', '4', 'C', '1', '0', 'A', '8', '6', 'B', 'B', '6', 'F', '6',
    'D', 'B', '8', 'B', '9', 'F', '0', '7', 'F', '7', 'E', '3', '3', '2', 'E',
    'D', '3', '8', '7', '6', '9', 'C', 'A', '0', '2', '6', '4', 'B', 'D', '0',
    'D', '8', '1', '0', 'C', '6', '8', 'F', 'B', '1', '4', '7', 'E', 'F', '9',
    '8', '4', 'C', '0', '9', '3', 'F', 'B', '9', '8', '2', '9', 'E', '3', '5',
    'E', 'B', '4', '4', '1', 'F', '9', '5', '5', '5', '7', '0', '6', '4', '3',
    'A', '\0'};

const unsigned char __MCC_ATM_public_key[] = {
    '3', '0', '8', '1', '9', 'D', '3', '0', '0', 'D', '0', '6', '0', '9', '2',
    'A', '8', '6', '4', '8', '8', '6', 'F', '7', '0', 'D', '0', '1', '0', '1',
    '0', '1', '0', '5', '0', '0', '0', '3', '8', '1', '8', 'B', '0', '0', '3',
    '0', '8', '1', '8', '7', '0', '2', '8', '1', '8', '1', '0', '0', 'C', '4',
    '9', 'C', 'A', 'C', '3', '4', 'E', 'D', '1', '3', 'A', '5', '2', '0', '6',
    '5', '8', 'F', '6', 'F', '8', 'E', '0', '1', '3', '8', 'C', '4', '3', '1',
    '5', 'B', '4', '3', '1', '5', '2', '7', '7', 'E', 'D', '3', 'F', '7', 'D',
    'A', 'E', '5', '3', '0', '9', '9', 'D', 'B', '0', '8', 'E', 'E', '5', '8',
    '9', 'F', '8', '0', '4', 'D', '4', 'B', '9', '8', '1', '3', '2', '6', 'A',
    '5', '2', 'C', 'C', 'E', '4', '3', '8', '2', 'E', '9', 'F', '2', 'B', '4',
    'D', '0', '8', '5', 'E', 'B', '9', '5', '0', 'C', '7', 'A', 'B', '1', '2',
    'E', 'D', 'E', '2', 'D', '4', '1', '2', '9', '7', '8', '2', '0', 'E', '6',
    '3', '7', '7', 'A', '5', 'F', 'E', 'B', '5', '6', '8', '9', 'D', '4', 'E',
    '6', '0', '3', '2', 'F', '6', '0', 'C', '4', '3', '0', '7', '4', 'A', '0',
    '4', 'C', '2', '6', 'A', 'B', '7', '2', 'F', '5', '4', 'B', '5', '1', 'B',
    'B', '4', '6', '0', '5', '7', '8', '7', '8', '5', 'B', '1', '9', '9', '0',
    '1', '4', '3', '1', '4', 'A', '6', '5', 'F', '0', '9', '0', 'B', '6', '1',
    'F', 'C', '2', '0', '1', '6', '9', '4', '5', '3', 'B', '5', '8', 'F', 'C',
    '8', 'B', 'A', '4', '3', 'E', '6', '7', '7', '6', 'E', 'B', '7', 'E', 'C',
    'D', '3', '1', '7', '8', 'B', '5', '6', 'A', 'B', '0', 'F', 'A', '0', '6',
    'D', 'D', '6', '4', '9', '6', '7', 'C', 'B', '1', '4', '9', 'E', '5', '0',
    '2', '0', '1', '1', '1', '\0'};

static const char * MCC_ATM_matlabpath_data[] = 
  { "ATM/", "toolbox/compiler/deploy/", "$TOOLBOXMATLABDIR/general/",
    "$TOOLBOXMATLABDIR/ops/", "$TOOLBOXMATLABDIR/lang/",
    "$TOOLBOXMATLABDIR/elmat/", "$TOOLBOXMATLABDIR/elfun/",
    "$TOOLBOXMATLABDIR/specfun/", "$TOOLBOXMATLABDIR/matfun/",
    "$TOOLBOXMATLABDIR/datafun/", "$TOOLBOXMATLABDIR/polyfun/",
    "$TOOLBOXMATLABDIR/funfun/", "$TOOLBOXMATLABDIR/sparfun/",
    "$TOOLBOXMATLABDIR/scribe/", "$TOOLBOXMATLABDIR/graph2d/",
    "$TOOLBOXMATLABDIR/graph3d/", "$TOOLBOXMATLABDIR/specgraph/",
    "$TOOLBOXMATLABDIR/graphics/", "$TOOLBOXMATLABDIR/uitools/",
    "$TOOLBOXMATLABDIR/strfun/", "$TOOLBOXMATLABDIR/imagesci/",
    "$TOOLBOXMATLABDIR/iofun/", "$TOOLBOXMATLABDIR/audiovideo/",
    "$TOOLBOXMATLABDIR/timefun/", "$TOOLBOXMATLABDIR/datatypes/",
    "$TOOLBOXMATLABDIR/verctrl/", "$TOOLBOXMATLABDIR/codetools/",
    "$TOOLBOXMATLABDIR/helptools/", "$TOOLBOXMATLABDIR/winfun/",
    "$TOOLBOXMATLABDIR/demos/", "$TOOLBOXMATLABDIR/timeseries/",
    "$TOOLBOXMATLABDIR/hds/", "$TOOLBOXMATLABDIR/guide/",
    "$TOOLBOXMATLABDIR/plottools/", "toolbox/local/",
    "toolbox/shared/controllib/", "toolbox/shared/dastudio/",
    "$TOOLBOXMATLABDIR/datamanager/", "toolbox/rtw/targets/common/tgtcommon/",
    "toolbox/compiler/", "toolbox/control/control/",
    "toolbox/control/ctrlguis/", "toolbox/control/ctrlobsolete/",
    "toolbox/control/ctrlutil/", "toolbox/shared/slcontrollib/",
    "toolbox/shared/optimlib/", "toolbox/database/database/",
    "toolbox/finance/finance/", "toolbox/ident/ident/",
    "toolbox/ident/nlident/", "toolbox/ident/idobsolete/",
    "toolbox/ident/idutils/", "toolbox/images/images/",
    "toolbox/images/imuitools/", "toolbox/images/iptutils/",
    "toolbox/shared/imageslib/", "toolbox/images/medformats/",
    "toolbox/shared/spcuilib/", "toolbox/imaq/imaq/",
    "toolbox/shared/imaqlib/", "toolbox/rtw/targets/mpc555dk/mpc555dk/",
    "toolbox/rtw/targets/mpc555dk/rt/blockset/mfiles/",
    "toolbox/nnet/nnet/nndistance/", "toolbox/nnet/nnet/nnformat/",
    "toolbox/nnet/nnet/nnnetinput/", "toolbox/nnet/nnet/nnprocess/",
    "toolbox/nnet/nnet/nntopology/", "toolbox/nnet/nnet/nntransfer/",
    "toolbox/nnet/nnet/nnweight/", "toolbox/nnet/nnutils/",
    "toolbox/signal/signal/", "toolbox/signal/sigtools/", "toolbox/stats/" };

static const char * MCC_ATM_classpath_data[] = 
  { "java/jar/toolbox/control.jar", "java/jar/toolbox/database.jar",
    "java/jar/toolbox/images.jar" };

static const char * MCC_ATM_libpath_data[] = 
  { "bin/win32/" };

static const char * MCC_ATM_app_opts_data[] = 
  { "" };

static const char * MCC_ATM_run_opts_data[] = 
  { "" };

static const char * MCC_ATM_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_ATM_component_data = { 

  /* Public key data */
  __MCC_ATM_public_key,

  /* Component name */
  "ATM",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_ATM_session_key,

  /* Component's MATLAB Path */
  MCC_ATM_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  73,

  /* Component's Java class path */
  MCC_ATM_classpath_data,
  /* Number of directories in the Java class path */
  3,

  /* Component's load library path (for extra shared libraries) */
  MCC_ATM_libpath_data,
  /* Number of directories in the load library path */
  1,

  /* MCR instance-specific runtime options */
  MCC_ATM_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_ATM_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "ATM_3A57C5D57E3D7819006CFC46DC35A4BD",

  /* MCR warning status data */
  MCC_ATM_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


