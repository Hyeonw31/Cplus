#include "MyClass.h"
#include <stdio.h>

CMyClass2::CMyClass2(int valueA) : a(valueA), a1(0), c(0)
{
	printf("������A ȣ���\n");
}
CMyClass2::CMyClass2(int valueA, int valueB) : a(valueA), a1(valueB), c(0)
{
	printf("������B ȣ���\n");
}

CMyClass2::~CMyClass2()
{
	printf("�ı��� ȣ���\n");
}
void CMyClass2::PrintB()
{
	printf("B=%d", a1);
}
void CMyClass2::SetC(int num)
{
	c = num;
}