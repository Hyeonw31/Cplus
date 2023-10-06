#include <stdio.h>

void ScanfinputNum(int& a, int& b)
{
	printf("\n숫자 하나를 입력하세요:");
	scanf_s("%d", &a);
	printf("\n숫자 하나 더 입력하세요:");
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
	printf("%d와 %d사이에 모든 수를 더하면 %d 입니다.", a, b, R);*/

	bool bRun = true;
	while (bRun)
	{
		int ninput = 0;
		float weight = 0, height = 0;
		printf("BMI를 계산하시겠습니까? 0)No 1)Yes");
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
			printf("몸무게를 입력해주세요\n");
			scanf_s("%f", &weight);
			printf("키를 입력해주세요\n");
			scanf_s("%f", &height);
			
			if (GetBMI(weight, standardWeight(height)) <= 10)
			{
				printf("%f : 정상\n", GetBMI(weight, standardWeight(height)));
			}
			else if (10 < GetBMI(weight, standardWeight(height)), GetBMI(weight, standardWeight(height))<= 20)
			{
				printf("%f : 과체중\n", GetBMI(weight, standardWeight(height)));
			}
			else if (GetBMI(weight, standardWeight(height)) > 20)
			{
				printf("%f : 비만\n", GetBMI(weight, standardWeight(height)));
			}
			break;
		}
		default:
			break;
		}
	}
	
}