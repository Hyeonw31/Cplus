#include <stdio.h>

void BuyItem(int *Money, int price)
{
	//int*Money�� �޸��� ������ �Ͼ�� �ʴ´� -> �޸��� ȿ������ ����, ������ ������ ����,
	*Money -= price;
}


enum ePhoneType
{
	iPhone = 0,
	Galaxys23,
	GalaxyFold,
	GalaxyZ
};

struct stPhoneShop
{
	int iPhoneCnt;
	int Galaxys23;
	int GalaxyFold;
	int GalaxyZ;

	void printPhoneCnt()
	{
		printf("iPhone=%d,Galaxys23=%d,GalaxyFold=%d,GalaxyZ=%d\n", iPhoneCnt, Galaxys23, GalaxyFold, GalaxyZ);
	}
};

void BuyPhone(ePhoneType phoneType, stPhoneShop* pPS)
{
	switch (phoneType)
	{
	case ePhoneType::iPhone: 
		pPS->iPhoneCnt--;// ����Ʈ�� �����ϴ� ����ü(struct)�� ������ "->"Ű����� �����Ѵ�.
		break;
	case ePhoneType::Galaxys23:
		pPS->Galaxys23--;// ����Ʈ�� �����ϴ� ����ü(struct)�� ������ "->"Ű����� �����Ѵ�.
		break;
	case ePhoneType::GalaxyFold:
		pPS->GalaxyFold--;// ����Ʈ�� �����ϴ� ����ü(struct)�� ������ "->"Ű����� �����Ѵ�.
		break;
	case ePhoneType::GalaxyZ:
		pPS->GalaxyZ--;// ����Ʈ�� �����ϴ� ����ü(struct)�� ������ "->"Ű����� �����Ѵ�.
		break;
	default:
		break;
	}
	
}


int main()
{
	int a = 0; //int -> 4Byte
	int b = 0;
	//�����͸� ����ϴ� ���� : 1) �޸��� ȿ������ ���� 2) ������ ������ ����,
	// int* pA : ������ ������ ����(pA�� ���ִ� �ּҿ� int���� ũ�⸸ŭ ����)
	// nullptr : ������ ������ �ʱ�ȭ ��(�ּҰ��� �������)
	//�������� NULL�� ��� ( NULL = 0�� �ǹ�) ������ ���� 0�̶� �ǹ̰� �����ؼ� ������ �߻� -> '�ּҰ��� �������'�̶�� ��Ȯ�� �ǹ̸� ���� nullptr�� ��� 
	// �������� ũ�� : x32���� 4Byte, x64���� 8Byte
	int* pA = nullptr;
	pA = &a;//a�� �ּҰ��� pA�� �ִ´ٴ� �ǹ�
	//* : ���۷��� �����Ѵ�.(�ּҰ� ����Ű�� �ִ� ���� �����Ѵ�.)
	b = *pA; // b�� pA�� ����Ű�� �ִ� �ּ��� ���� �ִ´�.
	*pA = 10; // pA�� ����Ű�� �ִ� �ּ��� ���� 10���� �����Ѵ�

	//int num1 = 0;
	//int num2 = 0;
	//*pNum = 20;
	//printf("pNum=%d\n", *pNum);
	//pNum = &num2;//pNum�� num2�� �ּҰ��� �ִ´�.(pNum�� num2�� ����Ű�� �ִ� ����)
	//printf("pNum=%d\n", *pNum); //num2 ���� 0
	//*pNum = 30; 
	//printf("pNum=%d\n", *pNum);


	int Money = 10000;

	BuyItem(&Money, 1000);
	printf("MyMoney=%d\n", Money);

	stPhoneShop stPS;
	stPS.iPhoneCnt = 100;
	stPS.Galaxys23 = 100;
	stPS.GalaxyFold = 100;
	stPS.GalaxyZ = 100;

	BuyPhone(ePhoneType::GalaxyFold, &stPS);
	stPS.printPhoneCnt();

	//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
	//�迭�� ������

	int arrInt[10] = { 0,10,20,30,40,50,60,70,80,90 };
	int* pInt = nullptr; //pInt�� ���ִ� �ּҿ� int���� ũ�⸸ŭ ����
	pInt = arrInt;
	printf("plnt=%d\n", *pInt);
	pInt += 1;//���� �迭 �����Ϳ� �ּҸ� ����Ų��.
	printf("plnt=%d\n", *pInt);

	short arrS[10] = { 0,10,20,30,40,50,60,70,80,90 };
	pInt = (int*)arrS;//(int*)�� ����ؼ� int*�� ������ ����ȯ(Cast)�Ѵ�.
	pInt += 1;// -> ������� 20�� ������ ������ short : 2byte�̰� int�� 4byte�̱� ������ int���� ũ�⸸ŭ +1�� �Ǹ� short���� ũ��� +2�� �� �Ͱ� ���� ����.
	// pInt�� int*�̹Ƿ� int(4Byte)��ŭ ���� �ּ� ���� �����Ѵ�. int(4Byte)��ŭ �̵��� �ּҰ��� Short(2Byte) 2�� �̵��� ��.
	short* pS = (short*)pInt;
	printf("pS=%d\n", *pS);

	//�Ʒ� �迭�� ���� ���� ������� ���
	int arr[10] = { 10, 2, 78, 53, 6, 33, 27, 99, 7, 31 };

	//for (int i = 0; i < 10; i++)
	//{
	//	int lowestIndex = i; // ���� ���� index ����
	//	
	//	for (int j = i + 1;j < 10;j++)
	//	{
	//		if (arr[lowestIndex] > arr[j])
	//		{
	//			//lowestIndex�� j�� ������� ��
	//			//j index�� ���� ������ j�� ���ο� lowestIndex
	//			lowestIndex = j;
	//		}
	//	}
	//	//j for���� ����Ǹ� lowestindex���� ���� ���� ���� index ���� ����
	//	//i �� ���������� ���鼭 ���� ���� ���� ������
	//	// lowestindex���� i index ���� ��ü�Ѵ�.
	//	int temp = arr[i];
	//	arr[i] = arr[lowestIndex];
	//	arr[lowestIndex] = temp;
	//}

	int k = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}

	}for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
}
