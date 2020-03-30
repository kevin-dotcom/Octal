#pragma once

#ifdef OC_PLATFORM_WINDOWS
	#ifdef OC_BUILD_DLL
		#define OCTAL_API _declspec(dllexport)
	#else
		#define OCTAL_API _declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows!
#endif