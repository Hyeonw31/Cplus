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

int main()
{
	unsigned int nResult = 0;
	unsigned int mResult = 0;
	unsigned int xResult = 0;
	unsigned int dResult = 0;
	unsigned int rResult = 0;
	nResult = CalculatorSum(1, 1);
	printf("�Լ� ���� ��� = %d\n", nResult);
	mResult = CalculatorMinus(3, 1);
	printf("�Լ� ���� ��� = %d\n", mResult);
	xResult = CalculatorMultiply(4, 4);
	printf("�Լ� ���� ��� = %d\n", xResult);
	dResult = CalculatorDivide(6, 2);
	printf("�Լ� ���� ��� = %d\n", dResult);
	rResult = CalculratorRemain(10, 3);
	printf("�Լ� ���� ��� = %d\n", rResult);
	CallFunction();

}