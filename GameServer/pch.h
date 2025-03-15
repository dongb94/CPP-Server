#pragma once

#define WIN32_LEAN_AND_MEAN // 거의 사용되지 않는 내용을 window 헤더에서 제거합니다.

#ifdef _DEBUG
#pragma comment(lib, "Debug\\ServerCore.lib")
#else
#pragma comment(lib, "Release\\ServerCore.lib")
#endif

#include "CorePch.h"

