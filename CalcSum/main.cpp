#include <stdio.h>

int Sum(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int Multiply(int a, int b)
{
	return a * b;
}

float Divide(float a, float b)
{
	return a / b;
}

int Remain(int a, int b)
{
	return a % b;
}
int main()
{
	bool bRun = true;
	while (bRun)
	{
		int nlnput = 0;
		int num1, num2;
		printf("� ������ �Ͻðڽ��ϱ�?(0:���ϱ�, 1:����, 2:���ϱ�, 3:������, 4:������):");
		scanf_s("%d", &nlnput);
		switch (nlnput)
		{
		case 0:
		{
			printf("���� 2���� �Է��ϼ���(num1 num2) :");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ���� %d�Դϴ�.", Sum(num1, num2));
		}
			break;
		case 1:
		{
			printf("���� 2���� �Է��ϼ���(num1 num2) :");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ���� %d�Դϴ�.", Minus(num1, num2));
		}
			break;
		case 2:
		{
			printf("���� 2���� �Է��ϼ���(num1 num2) :");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ���� %d�Դϴ�.", Multiply(num1, num2));
		}
		break;
		case 3:
		{
			printf("���� 2���� �Է��ϼ���(num1 num2) :");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ������� %f�Դϴ�.", Divide(num1, num2));
		}
		break;
		case 4:
		{
			printf("���� 2���� �Է��ϼ���(num1 num2) :");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� �������� %d�Դϴ�.", Remain(num1, num2));
		}
		break;
		}
	

		printf("���⸦ �����Ͻðڽ��ϱ�?(0:NO 1:Yes):");
		scanf_s("%d", &nlnput);
		switch (nlnput)
		{
		case 1:
			bRun = false;
			break;
		}
	}



	return 0;
}