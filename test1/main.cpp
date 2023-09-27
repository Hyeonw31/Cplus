#include <stdio.h>
#include <iostream>

int main()
{
//	//2에 배수 출력하기(0~100)
	int Num = 100;
	int k = 0;
	for (int i = 0; i <= Num; i++)
	{
		if (i % 2 == 1)
			continue;
		else k = i;
		printf("0부터 100까지 2의 배수 : %d\n", k);
	}

	//n은 숫자 하나를 입력 받기
	//n에 배수 출력하기(0~100)
	int a = 0; 
	printf("a의 배수는?(0~100) %d\n", a);
	scanf_s("%d", &a);
	for (int i = 1; i<=100; i++)
	{
		if (i % a == 0) {
			printf("%d\n", i);
		}
	}
	//(0~100) 2에 배수의 갯수 출력
	int Count = 0;
	for (int i = 1; i <= 90; i++) {
		if (i % 2 == 0)
		{
			Count++;
		}
	}
	printf("0~100까지 2의 배수의 개수 : %d\n", Count);

	//abcdef를 역으로 출력하기 -> fedcba
	wchar_t szWChar[20] = L"abcdef";
	wcscpy_s(szWChar, L"fedcba");
	wprintf(L"szWChar=%s\n", szWChar);

	//wchar_t 형으로 문자 입력 받기
	wchar_t szWCharInput[100] = L"";
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	wprintf(L"szWCharInput=%s\n", szWCharInput);
	
	// 입력 받은 문자열에서 'a'문자 갯수 출력
	int A = 0;
	for (int i = 0; i <= _countof(szWCharInput); i++)
	{
		if (szWCharInput[i] == 'a')
		{
			A++;
		}
		else
		{
			continue;
		}
	}
	printf("a문자의 개수는 : %d\n", A);
}