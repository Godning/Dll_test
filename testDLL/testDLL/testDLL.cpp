// testDLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "ExportDLL.h"
int Add(int a,int b)
{
	return a+b;
}
int Sub(int a,int b)
{
	return a-b;
}

