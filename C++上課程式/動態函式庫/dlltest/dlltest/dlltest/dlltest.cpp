// dlltest.cpp : 定義 DLL 應用程式的匯出函式。
//

#include "stdafx.h"
#include "dlltest.h"


extern "C++" DLLTEST_API int add(int x, int y) {
	std::cout << "x+y=" << x + y << std::endl;
	system("pause");
	return x + y;
}

