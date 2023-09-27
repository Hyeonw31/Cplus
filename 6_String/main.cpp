#include <stdio.h>
#include <iostream>
#include <assert.h>

unsigned int GetStringLength(const wchar_t* _pString)
{
	int i = 0;

	while (1)
	{
		wchar_t c = *(_pString + i);//�������� �ּҰ��� ���� ����

		if (c == '\0')//if(c == 0)
		{
			break;
		}
		i++;
	}
	return i;
}
// _Dest : "abcde"
// _pSource : "fghij\0"
void StringCat(wchar_t*_Dest, unsigned int size, const wchar_t*_pSource)
{
	int destLen = GetStringLength(_Dest);
	int sourceLen = GetStringLength(_pSource);

	if (size < destLen + sourceLen + 1) // sourceLen + 1 -> \0��ŭ�� ������ �ϳ� �� �ʿ�.
	{
		assert(nullptr);
	}
	wchar_t c = *(_Dest + destLen);
	
	
	for (int i = 0;i < sourceLen + 1;i++)
	{
		*(_Dest + destLen + i) = *(_pSource + i);
		//Dest[destLen + i] = pSource[i];
	}
	/**(_Dest + destLen) = *(_pSource);
	*(_Dest + destLen+1) = *(_pSource+1);
	*(_Dest + destLen+2) = *(_pSource+2);
	*(_Dest + destLen+3) = *(_pSource+3);*/
}

int StringCmp(const wchar_t* _pLeft, const wchar_t* _pRight)
{
	int LeftLen = GetStringLength(_pLeft);
	int RightLen = GetStringLength(_pRight);

	int nLoop = (LeftLen < RightLen) ? LeftLen : RightLen; // �� ª�� ���ڿ��� ���� ��ŭ�� ���Ѵ�.

	for (int i = 0; i < nLoop; i++)
	{
		if (_pLeft[i] == _pRight[i]) // ���ڿ��� ���ڰ� ���� ������ ũ��� ����� �������� �ʰ� �ٽ� for���� ����
			continue;

		return (_pLeft[i] > _pRight[i] ? 1 : -1); // ũ��� ����� ��ȯ�Ѵ�.
	}
	if (LeftLen != RightLen)
	{
		// left�� ���1, right�� ��� -1
		return(LeftLen > RightLen) ? 1 : -1; // ũ��� ����� ��ȯ
	}

	return 0;; //��� ���ڰ� ���� �� ����
}

int main()
{
	//���� ó��
	// multi-byte
	// 127�� �ƽ�Ű �ڵ� ���� ǥ��, ���ڿ� ���� ���������� ũ�Ⱑ �����
	// �������� ȣȯ�� ���� �ʴ� ������� �ٸ� �ý������� ������ ���ڸ� �˾ƺ� �� ���� ����
	// �Ϻ��� �ؽ�Ʈ ������ �ѱ� �����쿡�� ������ �� ���� ������ ������ ����
	// ö���� �ڱ��� ǥ�⸸�� ���� ���ڵ�. �ܱ��� ���� ���� �ٸ� ����ü�谡 �ʿ��� ��� ������
	char c1 = 'a'; // 1Byte(0~255), �ѱ��� �϶��� ''���, ���ڿ� �϶��� ""���.
	printf("c1=%c\n", c1);//�ѱ��� char ��½� %c ���

	setlocale(LC_ALL, "korean"); // multi - byte ��� ����

	char arrC1[10] = "abc�ѱ�";//����� 1Byte, �ѱ��� 2Byte ���
	printf("arrC1=%s\n", arrC1);//���ڿ� char ��½� %s ���

	// ���̵� ����(wide character)
	// multi-byte�� ������ �ذ��ϱ� ���� ���� �����ڵ� ���
	// ������ ���� ��� ���ڸ� ǥ���� �� �ֱ� ������ �ֱٿ� ���� ����
	// ���� ���� ����ϴ� ����� UTF-8�� �ִ�.
	// 2Byte(0~65535)���� �տ� ������ 1bit�� �����ϸ� 32767�� ǥ�� ����
	wchar_t wc1 = L'a'; // 2Byte(0~65535/2=3����), wchar_t ���� ���ڸ� ������ �տ� L�� ���δ�.
	wprintf(L"wc1=%c\n", wc1); // wchar_t ���� ����Ҷ��� wprint�� ���, ��� ���ڿ� �տ� L�� ���δ�.

	_wsetlocale(LC_ALL, L"korean"); // ���̵� ���� ��� ����

	wchar_t arrWC1[10] = L"abc�ѱ�";//wchar_t �迭�� ���ڿ��� ������ �տ� L�� ���δ�.
	wprintf(L"arrWC1=%s\n", arrWC1);// wchar_t ���� ����Ҷ��� wprint�� ���, ��� ���ڿ� �տ� L�� ���δ�.

	wchar_t szWChar[10] = L"abcdefghi"; // ���ڿ� �������� ������ �������̶�� ǥ��� '\0' ���ڰ� ��� ���ִ�. -> �迭�� ũ�Ⱑ 10�̾ 9���� ���������� �Է� ����.
	wprintf(L"szWchar=%s\n", szWChar);

	wchar_t szWCharLen[20] = L"abcdefg";
	int size = wcslen(szWCharLen);// ���ڿ� ���� ���ϱ� (iostream ���̺귯�� �Լ�)
	size = GetStringLength(szWCharLen);//���ڿ� ���� ���ϱ�
	printf("szWCharLen size = %d\n", size);

	StringCat(szWCharLen, 20, L"hij"); // ���ڿ� ���̱�(iostream ���̺귯�� �Լ�)
	wprintf(L"szWCharLen= %s\n", szWCharLen);

	wcscpy_s(szWCharLen, L"abcdef");// ���� ���ڿ��� �ڿ� ���ڿ� �����ؼ� �ִ´�.

	int nResult = wcscmp(L"abcdef", L"abcdef"); // ������ 0, �տ� ���� ������ ������1(cbcdef, abcdef = 1), �ڿ� ���� ������ ������ -1(abcdef, cbcdef = -1)
	nResult = StringCmp(L"abcdef", L"abcdefewadf");
	printf("nResult = %d\n", nResult);
}