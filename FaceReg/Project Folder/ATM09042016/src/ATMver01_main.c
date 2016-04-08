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

#include <stdio.h>
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" {
#endif

extern mclComponentData __MCC_ATMver01_component_data;

#ifdef __cplusplus
}
#endif

static HMCRINSTANCE _mcr_inst = NULL;


#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultPrintHandler(const char *s)
{
  return mclWrite(1 /* stdout */, s, sizeof(char)*strlen(s));
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultErrorHandler(const char *s)
{
  int written = 0;
  size_t len = 0;
  len = strlen(s);
  written = mclWrite(2 /* stderr */, s, sizeof(char)*len);
  if (len > 0 && s[ len-1 ] != '\n')
    written += mclWrite(2 /* stderr */, "\n", sizeof(char));
  return written;
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_ATMver01_C_API 
#define LIB_ATMver01_C_API /* No special import/export declaration */
#endif

LIB_ATMver01_C_API 
bool MW_CALL_CONV ATMver01InitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler
)
{
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
  if (!mclInitializeComponentInstanceWithEmbeddedCTF(&_mcr_inst,
                                                     &__MCC_ATMver01_component_data,
                                                     true, NoObjectType,
                                                     ExeTarget, error_handler,
                                                     print_handler, 18354296, NULL))
    return false;
  return true;
}

LIB_ATMver01_C_API 
bool MW_CALL_CONV ATMver01Initialize(void)
{
  return ATMver01InitializeWithHandlers(mclDefaultErrorHandler,
                                        mclDefaultPrintHandler);
}

LIB_ATMver01_C_API 
void MW_CALL_CONV ATMver01Terminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

int run_main(int argc, const char **argv)
{
  int _retval;
  /* Generate and populate the path_to_component. */
  char path_to_component[(PATH_MAX*2)+1];
  separatePathName(argv[0], path_to_component, (PATH_MAX*2)+1);
  __MCC_ATMver01_component_data.path_to_component = path_to_component; 
  if (!ATMver01Initialize()) {
    return -1;
  }
  _retval = mclMain(_mcr_inst, argc, argv, "login", 0);
  if (_retval == 0 /* no error */) mclWaitForFiguresToDie(NULL);
  ATMver01Terminate();
  mclTerminateApplication();
  return _retval;
}

int main(int argc, const char **argv)
{
  if (!mclInitializeApplication(
    __MCC_ATMver01_component_data.runtime_options,
    __MCC_ATMver01_component_data.runtime_option_count))
    return 0;
  
  return mclRunMain(run_main, argc, argv);
}
