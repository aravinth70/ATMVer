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

#include <stdio.h>
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" {
#endif

extern mclComponentData __MCC_ATM_component_data;

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
#ifndef LIB_ATM_C_API 
#define LIB_ATM_C_API /* No special import/export declaration */
#endif

LIB_ATM_C_API 
bool MW_CALL_CONV ATMInitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler
)
{
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
  if (!mclInitializeComponentInstanceWithEmbeddedCTF(&_mcr_inst,
                                                     &__MCC_ATM_component_data,
                                                     true, NoObjectType,
                                                     ExeTarget, error_handler,
                                                     print_handler, 5145714, NULL))
    return false;
  return true;
}

LIB_ATM_C_API 
bool MW_CALL_CONV ATMInitialize(void)
{
  return ATMInitializeWithHandlers(mclDefaultErrorHandler,
                                   mclDefaultPrintHandler);
}

LIB_ATM_C_API 
void MW_CALL_CONV ATMTerminate(void)
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
  __MCC_ATM_component_data.path_to_component = path_to_component; 
  if (!ATMInitialize()) {
    return -1;
  }
  _retval = mclMain(_mcr_inst, argc, argv, "login", 0);
  if (_retval == 0 /* no error */) mclWaitForFiguresToDie(NULL);
  ATMTerminate();
#if defined( _MSC_VER)
  PostQuitMessage(0);
#endif
  mclTerminateApplication();
  return _retval;
}

#if defined( _MSC_VER)

#define argc __argc
#define argv __argv

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
#else
int main(int argc, const char **argv)

#endif
{
  if (!mclInitializeApplication(
    __MCC_ATM_component_data.runtime_options,
    __MCC_ATM_component_data.runtime_option_count))
    return 0;
  
  return mclRunMain(run_main, argc, argv);
}
