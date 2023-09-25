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

int AAA()
{
	while (1)
	{
		printf("1st While! Start\n");
		break;
		printf("1st While! End\n");
	}
	while (1)
	{
		printf("2nd While! Start\n");
		return 0;
		printf("2nd While! End\n");
	}
	while (1)
	{
		printf("3nd While! Start\n");
		break;
		printf("3nd While! End\n");
	}

	return 0;
}

int main()
{
	//unsigned int nResult = 0;
	//unsigned int mResult = 0;
	//unsigned int xResult = 0;
	//unsigned int dResult = 0;
	//unsigned int rResult = 0;
	//nResult = CalculatorSum(1, 1);
	//printf("함수 실행 결과 = %d\n", nResult);
	//mResult = CalculatorMinus(3, 1);
	//printf("함수 실행 결과 = %d\n", mResult);
	//xResult = CalculatorMultiply(4, 4);
	//printf("함수 실행 결과 = %d\n", xResult);
	//dResult = CalculatorDivide(6, 2);
	//printf("함수 실행 결과 = %d\n", dResult);
	//rResult = CalculratorRemain(10, 3);
	//printf("함수 실행 결과 = %d\n", rResult);
	//CallFunction();

	//int kResult = 1;
	//int i = 1;
	//while (i <= 10) // <- 이 조건식이 True면 아래 괄호 안의 코드를 실행한다. / 이 조건식이 False면 while문을 종료하고 다음 코드를 실행
	//{ <- 반복 처리할 코드 시작
	//	kResult *= i;
	//	i++;
	//	printf("break 실행전\n");
	//	break;//이 명령어를 만나면 while 즉시 종료. 아래 코트 실행안됨.
	//	printf("break 실행후");
	//} <- 반복 처리할 코드 종료
	//printf("while Factorial = %d", kResult);

	//1~n까지 합 구하는 함수
	//int SumToN(int Num)

	
	//0~Num까지 짝수만 더하기
	//int i = 0, Num = 10;
	//int kResult = 0;
	//while (i <= Num)
	//{
	//	i++;
	//	if (i % 2 != 0)
	//		continue; // 위 조건식을 충족하면 다음 코드를 실행하지 않고 while 코드의 처음으로 돌아간다.
	//
	//		kResult += i;
	//
	//}
	//printf("0~Num EvenSum=%d", kResult);
	int Num = 10;
	int fResult = 0;
	for(int i = 0; i <= Num; ++i)
		{
		if (i % 2 == 1)
		fResult += i;
		}
	printf("0~Num EvenSum=%d\n", fResult);
	AAA();

	
	
}