#include <iostream>

class CBase {
public:
	int a = 1;
};

class CChild1 : public CBase
{
public:
	void printB()
	{
		printf("Child1::printB=%f\n", b);
	}
	float b = 3.14f;
};

class CChild2 : public CBase
{
public:
	void printB()
	{
		printf("Child2::printC=%d\n", c);
	}
	int c = 3;
};
int main()
{
	CBase* pBase = new CChild1;
	// pBase ->printB; --> CBase* 포인트로 캐스팅(읽어오기) 하기 때문에 printB에 접근이 불가능하다.

	// float b = 3.14f;
	// int a = (int)b; -> 강제 형변환

	// 기본 캐스팅 방법
	// 강제로 CBase* 포인터에 메모리를 CChild1 클래스 메모리 틀에 맞춰 읽어온다.
	CChild1* pChild1 = (CChild1*)pBase;
	pChild1->printB();
	// 아래와 같이 포인트를 잘못 가르키는 실수를 할 경우 문제가 발생할 수 있다.
	// 강제로 int* 포인터의 메모리를 CChild*에 맞추면 서로 맞지 않아 차후에 문제가 발생할 수 있는데 컴파일은 문제없이 됨--> 어디서 문제가 발생했는지 찾기 어려움
	int* a = new int(0);
	pChild1 = (CChild1*)a;

	// static_Cast : 정적 캐스팅 ( 컴파일 단계에서 변환 )
	// 강제 int* 포인터의 메모리를 CChild*에 맞추려고 하면 컴파일 불가능
	// pChild1 = static_cast<CChild*>(a); -> 에러 "잘못된 형식 변환입니다." -> CBase*을 캐스팅시 정상적으로 컴파일 가능
	pChild1 = static_cast<CChild1*>(pBase);
	pChild1->printB();

	//float 형태인 CChild1을 int형인 CChild2 형으로 강제 캐스팅을 해서 출력함(float , int 형은 둘다 4Byte라 틀이 동일함) -> 아래와 마찬가지로 1078523331값 출력 
	CBase* pBase2 = new CChild1;
	CChild2* pChild2 = static_cast<CChild2*>(pBase2);
	pChild2->printB();

	// float를 int형으로 강제로 메모리를 읽어 출력하면 3.14f의 int형태의 값이 출력(1078523331)
	float fvalue = 3.14f;
	int* pi = (int*)&fvalue;
	printf("pi=%d", *pi);

	delete pBase;
	delete a;
	delete pBase2;
}