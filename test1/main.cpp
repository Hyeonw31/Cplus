#include <stdio.h>
#include <iostream>

int main()
{
//	//2�� ��� ����ϱ�(0~100)
	int Num = 100;
	int k = 0;
	for (int i = 0; i <= Num; i++)
	{
		if (i % 2 == 1)
			continue;
		else k = i;
		printf("0���� 100���� 2�� ��� : %d\n", k);
	}

	//n�� ���� �ϳ��� �Է� �ޱ�
	//n�� ��� ����ϱ�(0~100)
	int a = 0; 
	printf("a�� �����?(0~100) %d\n", a);
	scanf_s("%d", &a);
	for (int i = 1; i<=100; i++)
	{
		if (i % a == 0) {
			printf("%d\n", i);
		}
	}
	//(0~100) 2�� ����� ���� ���
	int Count = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
		{
			Count++;
		}
	}
	printf("0~100���� 2�� ����� ���� : %d\n", Count);

	//abcdef�� ������ ����ϱ� -> fedcba
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

	//wchar_t ������ ���� �Է� �ޱ�
	// "szWCharInput"�̸��� ����
	// "wchar_t"�������� [20]�� ũ��� �����ϰ� L""���� �ʱⰪ���� �ִ´�.
	wchar_t szWCharInput[100] = L"";
	// wscanf_S�� �Է��� �޴� ����� ��� 
	// L"%ls" �������·� �Է��� �޴´�.
	// "szWCharInput"������ �Է��� ���� �־��ְڴ�.
	// *(unsigned)_countof(szWCharInput)"�� ���� ���� ������ ũ��.
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	// wprintf�� ����� �ϴ� ��� 
	// L"szWCharInput=%s" ���� ���·� ���.
	// %s��ġ�� szWCharInput ���� ���.
	wprintf(L"szWCharInput=%s\n", szWCharInput);
	
	// �Է� ���� ���ڿ����� 'a'���� ���� ���
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
	printf("a������ ������ : %d\n", A);
}