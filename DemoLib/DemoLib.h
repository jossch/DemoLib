// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DEMOLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DEMOLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DEMOLIB_EXPORTS
#define DEMOLIB_API __declspec(dllexport)
#else
#define DEMOLIB_API __declspec(dllimport)
#endif

// This class is exported from the DemoLib.dll
//class DEMOLIB_API CDemoLib {
//public:
//	CDemoLib(void);
//	// TODO: add your methods here.
//};

extern DEMOLIB_API int factor;

DEMOLIB_API int __stdcall getFactor();

DEMOLIB_API double multiplyByFactor(double value);
