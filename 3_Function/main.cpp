#include <stdio.h>

// �Լ���
// unsigned int : ��ȯ �ڷ���
// CalculatorSum : �Լ� �̸�
// (int x, int y) : �Ű� ���� (�Ķ��Ÿ)
unsigned int CalculatorSum(int x, int y) // unsigned int : ��ȯ �ڷ��� -> ���ϰ��� ������ ������ ����.
{//->�Լ� ����
	printf("�Լ� �����ߴ�.\n");
	return x + y;//<- ��ȯ �� ���� ó��
	printf("�Լ� ������.\n");
}//->�Լ� ��

//���� �Լ� �����
unsigned int CalculatorMinus(int x, int y)
{
	return x - y;
}
//���ϱ� �Լ� �����
unsigned int CalculatorMultiply(int x, int y)
{
	return x * y;
}
//������ �Լ� �����
unsigned int CalculatorDivide(int x, int y)
{
	return x / y;
}
//������ �Լ� �����
unsigned int CalculratorRemain(int x, int y)
{
	return x % y;
}

void CallFunction()
{
	printf("�Լ� ȣ���ߴ�.");
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
	//printf("�Լ� ���� ��� = %d\n", nResult);
	//mResult = CalculatorMinus(3, 1);
	//printf("�Լ� ���� ��� = %d\n", mResult);
	//xResult = CalculatorMultiply(4, 4);
	//printf("�Լ� ���� ��� = %d\n", xResult);
	//dResult = CalculatorDivide(6, 2);
	//printf("�Լ� ���� ��� = %d\n", dResult);
	//rResult = CalculratorRemain(10, 3);
	//printf("�Լ� ���� ��� = %d\n", rResult);
	//CallFunction();

	//int kResult = 1;
	//int i = 1;
	//while (i <= 10) // <- �� ���ǽ��� True�� �Ʒ� ��ȣ ���� �ڵ带 �����Ѵ�. / �� ���ǽ��� False�� while���� �����ϰ� ���� �ڵ带 ����
	//{ <- �ݺ� ó���� �ڵ� ����
	//	kResult *= i;
	//	i++;
	//	printf("break ������\n");
	//	break;//�� ��ɾ ������ while ��� ����. �Ʒ� ��Ʈ ����ȵ�.
	//	printf("break ������");
	//} <- �ݺ� ó���� �ڵ� ����
	//printf("while Factorial = %d", kResult);

	//1~n���� �� ���ϴ� �Լ�
	//int SumToN(int Num)

	
	//0~Num���� ¦���� ���ϱ�
	//int i = 0, Num = 10;
	//int kResult = 0;
	//while (i <= Num)
	//{
	//	i++;
	//	if (i % 2 != 0)
	//		continue; // �� ���ǽ��� �����ϸ� ���� �ڵ带 �������� �ʰ� while �ڵ��� ó������ ���ư���.
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