// DemoLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DemoLib.h"


// This is an example of an exported variable
//DEMOLIB_API int nDemoLib=0;

// This is an example of an exported function.
//DEMOLIB_API int fnDemoLib(void)
//{
//	return 42;
//}

// This is the constructor of a class that has been exported.
// see DemoLib.h for the class definition
//CDemoLib::CDemoLib()
//{
//	return;
//}

DEMOLIB_API int factor = 3;

DEMOLIB_API int __stdcall getFactor()
{
	return factor;
}

DEMOLIB_API double multiplyByFactor(double value)
{
	return value * (double)factor;
}