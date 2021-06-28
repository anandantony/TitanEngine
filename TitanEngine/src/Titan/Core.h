#pragma once

#ifdef TE_PLATFORM_WINDOWS
	#ifdef TE_BUILD_DLL
		#define TITAN_API _declspec(dllexport)
	#else
		#define TITAN_API _declspec(dllimport)
	#endif
#else
	#error Hazel only supports windows!
#endif