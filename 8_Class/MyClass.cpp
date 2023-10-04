#include "MyClass.h"
#include <stdio.h>

CMyClass2::CMyClass2(int valueA) : a(valueA), a1(0), c(0)
{
	printf("생성자A 호출됨\n");
}
CMyClass2::CMyClass2(int valueA, int valueB) : a(valueA), a1(valueB), c(0)
{
	printf("생성자B 호출됨\n");
}

CMyClass2::~CMyClass2()
{
	printf("파괴자 호출됨\n");
}
void CMyClass2::PrintB()
{
	printf("B=%d", a1);
}
void CMyClass2::SetC(int num)
{
	c = num;
}