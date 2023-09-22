#include <stdio.h>

// 함수형
// unsigned int : 반환 자료형
// CalculatorSum : 함수 이름
// (int x, int y) : 매개 변수 (파라메타)
unsigned int CalculatorSum(int x, int y) // unsigned int : 반환 자료형 -> 리턴값이 없으면 오류가 난다.
{//->함수 시작
	printf("함수 시작했다.\n");
	return x + y;//<- 반환 및 종료 처리
	printf("함수 끝났다.\n");
}//->함수 끝

//빼기 함수 만들기
unsigned int CalculatorMinus(int x, int y)
{
	return x - y;
}
//곱하기 함수 만들기
unsigned int CalculatorMultiply(int x, int y)
{
	return x * y;
}
//나누기 함수 만들기
unsigned int CalculatorDivide(int x, int y)
{
	return x / y;
}
//나머지 함수 만들기
unsigned int CalculratorRemain(int x, int y)
{
	return x % y;
}

void CallFunction()
{
	printf("함수 호출했다.");
}

int main()
{
	unsigned int nResult = 0;
	unsigned int mResult = 0;
	unsigned int xResult = 0;
	unsigned int dResult = 0;
	unsigned int rResult = 0;
	nResult = CalculatorSum(1, 1);
	printf("함수 실행 결과 = %d\n", nResult);
	mResult = CalculatorMinus(3, 1);
	printf("함수 실행 결과 = %d\n", mResult);
	xResult = CalculatorMultiply(4, 4);
	printf("함수 실행 결과 = %d\n", xResult);
	dResult = CalculatorDivide(6, 2);
	printf("함수 실행 결과 = %d\n", dResult);
	rResult = CalculratorRemain(10, 3);
	printf("함수 실행 결과 = %d\n", rResult);
	CallFunction();

}