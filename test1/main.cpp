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
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
		{
			Count++;
		}
	}
	printf("0~100까지 2의 배수의 개수 : %d\n", Count);

	//abcdef를 역으로 출력하기 -> fedcba
	wchar_t szWChar[20] = L"abcdef";
	int size = wcslen(szWChar);
	printf("%c", szWChar[size - 1]);
	printf("%c", szWChar[size - 2]);
	printf("%c", szWChar[size - 3]);
	printf("%c", szWChar[size - 4]);
	printf("%c", szWChar[size - 5]);
	printf("%c", szWChar[size - 6]); 
	//-> for (int i = 1; i<=size; ++i)
	// { printf("%c", szWChar[size - i]); }
	//-> for(int i = size; i>=0; --i)
	// { printf("%c", szWChar[i - 1]); }

	/*wcscpy_s(szWChar, L"fedcba");
	wprintf(L"szWChar=%s\n", szWChar);*/

	//wchar_t 형으로 문자 입력 받기
	// "szWCharInput"이름을 가진
	// "wchar_t"변수형을 [20]의 크기로 생성하고 L""값을 초기값으로 넣는다.
	wchar_t szWCharInput[100] = L"";
	// wscanf_S는 입력을 받는 기능을 사용 
	// L"%ls" 변수형태로 입력을 받는다.
	// "szWCharInput"변수에 입력한 값을 넣어주겠다.
	// *(unsigned)_countof(szWCharInput)"은 값을 넣을 변수의 크기.
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	// wprintf는 출력을 하는 기능 
	// L"szWCharInput=%s" 문자 형태로 출력.
	// %s위치에 szWCharInput 값을 출력.
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