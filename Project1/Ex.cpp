#include <stdio.h>

void ScanfinputNum(int& a, int& b)
{
	printf("\n���� �ϳ��� �Է��ϼ���:");
	scanf_s("%d", &a);
	printf("\n���� �ϳ� �� �Է��ϼ���:");
	scanf_s("%d", &b);
}

float standardWeight(float height)
{
	return (height - 100) * 0.9;
}

float GetBMI(float weight, float standardWeight)
{
	return (weight - standardWeight) * 100 / standardWeight;
}


int main()
{
	/*int a = 0, b = 0, R = 0;
	ScanfinputNum(a, b);
	for (int i = a; i < b; i++)
	{
		R += i;
	}
	printf("%d�� %d���̿� ��� ���� ���ϸ� %d �Դϴ�.", a, b, R);*/

	bool bRun = true;
	while (bRun)
	{
		int ninput = 0;
		float weight = 0, height = 0;
		printf("BMI�� ����Ͻðڽ��ϱ�? 0)No 1)Yes");
		scanf_s("%d", &ninput);
		switch (ninput)
		{
		case 0:
		{
			bRun = false;
			break;
		}
		case 1:
		{
			printf("�����Ը� �Է����ּ���\n");
			scanf_s("%f", &weight);
			printf("Ű�� �Է����ּ���\n");
			scanf_s("%f", &height);
			
			if (GetBMI(weight, standardWeight(height)) <= 10)
			{
				printf("%f : ����\n", GetBMI(weight, standardWeight(height)));
			}
			else if (10 < GetBMI(weight, standardWeight(height)), GetBMI(weight, standardWeight(height))<= 20)
			{
				printf("%f : ��ü��\n", GetBMI(weight, standardWeight(height)));
			}
			else if (GetBMI(weight, standardWeight(height)) > 20)
			{
				printf("%f : ��\n", GetBMI(weight, standardWeight(height)));
			}
			break;
		}
		default:
			break;
		}
	}
	
}