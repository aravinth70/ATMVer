/*
 * MATLAB Compiler: 4.8 (R2008a)
 * Date: Sat Apr 09 01:43:47 2016
 * Arguments: "-B" "macro_default" "-o" "ATMver01" "-W" "main" "-d"
 * "C:\xampp\htdocs\ATM\FaceReg\Project Folder\ATM09042016\src" "-T" "link:exe"
 * "-v" "C:\xampp\htdocs\ATM\FaceReg\login.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\DATABASE.mat" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\facerec.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\facerectrain.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\gendata.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\getcam.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\mainmenu.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\passwordlog.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\Read Me.txt" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\test.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\testsys.m" "-a"
 * "C:\xampp\htdocs\ATM\FaceReg\usermenu.m" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\avcodec-52.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\avformat-52.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\avutil-50.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\CameraHelperShell.exe" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\Launcher_Main.exe" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\Libeay32.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\libmp4v2.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\LWS.css" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\LWS.exe" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\MotionDetection.exe" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\Phonon4.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\QTCore4.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\QTGui4.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\QtNetwork4.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\QTWebkit4.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\QTXml4.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\QtXmlPatterns4.dll" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\Resolution.xml" "-a" "C:\Program
 * Files\Logitech\LWS\Webcam Software\Ssleay32.dll" "-a" "C:\Program
 * Files\Common Files\LogiShrd\LWSPlugins\LWS\Applets\HelpMain\Acme.exe" "-a"
 * "C:\Program Files\Common
 * Files\LogiShrd\LWSPlugins\LWS\Applets\HelpMain\launchershortcut.exe" "-a"
 * "C:\Program Files\Common
 * Files\LogiShrd\LWSPlugins\LWS\Applets\HelpMain\LWS2.css" "-a" "C:\Program
 * Files\Common Files\LogiShrd\LWSPlugins\LWS\Applets\HelpMain\Main_help.dll"
 * "-a" "C:\Program Files\Common
 * Files\LogiShrd\LWSPlugins\LWS\Applets\HelpMain\Resolution_13_0_0.xml" 
 */

#include "mclmcrrt.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_ATMver01_session_key[] = {
    '0', '0', 'F', 'F', '9', '8', 'E', 'D', 'D', 'D', 'F', '9', 'C', 'D', '5',
    '6', '0', '0', '9', '5', 'A', 'E', '7', '0', '3', '2', '5', '9', '5', 'D',
    '6', '3', '2', '0', 'E', 'B', 'A', '4', 'A', '6', '4', '9', '9', 'A', '1',
    'D', 'A', '2', '7', '9', '0', 'B', 'D', '7', '3', '0', '6', 'C', '8', 'B',
    '6', '6', '6', '1', '5', '9', '8', 'A', '7', 'B', '8', '9', '1', '2', 'A',
    '4', 'B', '9', 'F', 'E', '6', 'D', '2', '9', '6', 'F', '7', 'F', '9', '9',
    '3', '4', '2', '7', '2', 'C', 'B', '5', 'A', 'D', '4', 'C', 'A', '3', '7',
    'B', '1', 'A', '7', '1', 'D', '9', '3', '9', '5', 'A', '8', 'E', 'F', 'F',
    'C', '6', '0', 'E', '9', 'C', 'E', '1', '8', '5', 'D', 'E', '2', '5', '8',
    '2', '2', '4', '7', '0', '7', '4', 'B', 'B', '9', '8', '6', '1', 'E', 'C',
    '2', '7', 'D', 'A', '3', '5', '0', 'D', '1', 'E', '1', 'F', '1', 'B', 'D',
    '0', '0', '4', '2', 'E', 'A', '7', 'C', 'F', 'C', '8', '5', 'A', '8', '1',
    'A', '5', '6', '8', 'A', '4', '4', '3', 'D', 'B', '2', '4', '9', '7', 'B',
    '1', 'B', '7', '8', '0', '2', '8', '3', 'E', 'F', '8', 'A', 'B', '1', '9',
    '6', 'E', '0', '6', '0', '9', 'C', 'A', '1', '5', '9', 'D', '4', '2', '0',
    '3', 'E', '9', '2', 'A', '1', '4', '9', 'E', 'B', '0', '2', 'E', 'A', 'C',
    '0', '0', '9', '8', '4', '3', '4', '4', '6', '1', 'B', 'E', 'A', '3', '2',
    '2', '\0'};

const unsigned char __MCC_ATMver01_public_key[] = {
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

static const char * MCC_ATMver01_matlabpath_data[] = 
  { "ATMver01/", "toolbox/compiler/deploy/", "xampp/htdocs/ATM/FaceReg/",
    "Program Files/Logitech/LWS/Webcam Software/",
    "Program Files/Common Files/LogiShrd/LWSPlugins/LWS/Applets/HelpMain/",
    "$TOOLBOXMATLABDIR/general/", "$TOOLBOXMATLABDIR/ops/",
    "$TOOLBOXMATLABDIR/lang/", "$TOOLBOXMATLABDIR/elmat/",
    "$TOOLBOXMATLABDIR/elfun/", "$TOOLBOXMATLABDIR/specfun/",
    "$TOOLBOXMATLABDIR/matfun/", "$TOOLBOXMATLABDIR/datafun/",
    "$TOOLBOXMATLABDIR/polyfun/", "$TOOLBOXMATLABDIR/funfun/",
    "$TOOLBOXMATLABDIR/sparfun/", "$TOOLBOXMATLABDIR/scribe/",
    "$TOOLBOXMATLABDIR/graph2d/", "$TOOLBOXMATLABDIR/graph3d/",
    "$TOOLBOXMATLABDIR/specgraph/", "$TOOLBOXMATLABDIR/graphics/",
    "$TOOLBOXMATLABDIR/uitools/", "$TOOLBOXMATLABDIR/strfun/",
    "$TOOLBOXMATLABDIR/imagesci/", "$TOOLBOXMATLABDIR/iofun/",
    "$TOOLBOXMATLABDIR/audiovideo/", "$TOOLBOXMATLABDIR/timefun/",
    "$TOOLBOXMATLABDIR/datatypes/", "$TOOLBOXMATLABDIR/verctrl/",
    "$TOOLBOXMATLABDIR/codetools/", "$TOOLBOXMATLABDIR/helptools/",
    "$TOOLBOXMATLABDIR/winfun/", "$TOOLBOXMATLABDIR/demos/",
    "$TOOLBOXMATLABDIR/timeseries/", "$TOOLBOXMATLABDIR/hds/",
    "$TOOLBOXMATLABDIR/guide/", "$TOOLBOXMATLABDIR/plottools/",
    "toolbox/local/", "toolbox/shared/controllib/", "toolbox/shared/dastudio/",
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

static const char * MCC_ATMver01_classpath_data[] = 
  { "java/jar/toolbox/control.jar", "java/jar/toolbox/database.jar",
    "java/jar/toolbox/images.jar" };

static const char * MCC_ATMver01_libpath_data[] = 
  { "bin/win32/" };

static const char * MCC_ATMver01_app_opts_data[] = 
  { "" };

static const char * MCC_ATMver01_run_opts_data[] = 
  { "" };

static const char * MCC_ATMver01_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_ATMver01_component_data = { 

  /* Public key data */
  __MCC_ATMver01_public_key,

  /* Component name */
  "ATMver01",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_ATMver01_session_key,

  /* Component's MATLAB Path */
  MCC_ATMver01_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  76,

  /* Component's Java class path */
  MCC_ATMver01_classpath_data,
  /* Number of directories in the Java class path */
  3,

  /* Component's load library path (for extra shared libraries) */
  MCC_ATMver01_libpath_data,
  /* Number of directories in the load library path */
  1,

  /* MCR instance-specific runtime options */
  MCC_ATMver01_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_ATMver01_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "ATMver01_5BF3FFFBA59D49264F586D1114889FFA",

  /* MCR warning status data */
  MCC_ATMver01_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


