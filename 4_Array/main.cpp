#include <stdio.h>


// c++�� ������(4�ܰ�)
// c++���� ����� �ۼ��� �ҽ��ڵ带 ��ǻ�Ͱ� ������ �ִ� �ڵ�� ��ȯ�Ͽ� �����Ҽ� �ִ� ���Ϸ� ��ȯ�ϴ� ����

// 1. ��ó��(Preprocessing) �ܰ� : #include �� # define �� ���� ��ó���� ��ũ�ε��� ó��(����)�ϴ� �ܰ�
// 2. ������(Compile) �ܰ� : ������ �ҽ� ���ϵ��� ����� ��ɾ�(������ �˾Ƶ��� �� �ִ� ����)�� ��ȯ 
// 3. �����(Assemble) �ܰ� : ����� �ڵ���� ���� ����� �̷���� ���� �ڵ�(Object file)�� ��ȯ(.obj ���� ����)�ϴ� �ܰ�
// 4. ��ŷ(Linking) �ܰ� : ������ ���� �ڵ���� �ѵ� ��Ƽ� �ϳ��� ���� ������ �����ϴ� �ܰ�

#include "money.h"
#include "calcFunc.h"

//�޸� ����
// 1. Code ���� : ������ �ڵ尡 ����Ǿ� �ִ� ����(����� ����)
// 2. Data ���� : ��������, Static �������� ����, ���μ����� ����� ������ �޸𸮿� �����
// 3. Stack ���� : ��������, �Ű��������� ����, �Լ��� ȣ��Ǹ� �����ǰ� �Լ��� ����Ǹ� �ý��ۿ� ��ȯ
// 4. Heap ���� : malloc �Ǵ� new �Լ��� ���ؼ� �������� �Ҵ�Ǵ� ����, malloc() �Ǵ� new�����ڷ� �Ҵ�, free() �Ǵ� delete �����ڷ� ����

int g_money = 0;//���� ����(�Լ� ��, 1���� ���� ����, �ٸ� cpp������ ��� �Ұ���)

static int s_money = 0;

struct PhoneShop
{
	int iPhoneA;
	int zFlipA;
	int GalaxyS23A;
	int GalaxyFoldA;

	PhoneShop() : iPhoneA(100), zFlipA(100), GalaxyS23A(100), GalaxyFoldA(100)
	{

	}

	void SetPhoneShopValue(int iPhone, int zFlip, int GalaxyS23, int GalaxyFold)
	{
		iPhoneA = iPhone;
		zFlipA = zFlip;
		GalaxyS23A = GalaxyS23;
		GalaxyFoldA = GalaxyFold;
	}
	void printPhoneValue()
	{
		printf("�ڵ��� ���� ���� ������ : %d, ��Ʈ�ø� : %d, ������23 : %d, ���������� : %d\n", iPhoneA, zFlipA, GalaxyS23A, GalaxyFoldA);
	}
};


struct fruitShop
{
	//����ü ���ο� ������ ������ ����ü ��ü�� ������� ������ ������� ����
	int appleA;
	int mangoA;
	int strawberryA;

	//����ü ������ ":"�� ���� �����ʿ� ������ �ʱⰪ�� �����Ѵ�. -> �ʱ�ȭ
	fruitShop() : appleA(1000), mangoA(1000), strawberryA(1000) 
	{

	}
	//����ü ���ο� �Լ� ����
	void SetFruitValue(int apple, int mango, int strawberry)
	{
		int appleB = apple;//SetFruitValue �Լ��� ����Ǹ� ������� ����.
		appleA = apple;
		mangoA = mango;
		strawberryA = strawberry;
	}

	void printShopValue()
	{
		printf("���ϰ��� ���� ��� : %d, ���� : %d, ���� : %d\n", appleA, mangoA, strawberryA);
	}
};

// 1+1 =2
int Add(int a, int b)
{
	printf("int�� ������ ��µǾ����ϴ�.\n");
	return a + b;
}
// 1.2 + 1.3 = 2.5
float Add(float a, float b)
{
	printf("float�� ������ ��µǾ����ϴ�.\n");
	return a + b;
}

double Add(double a, double b)
{
	printf("double�� ������ ��µǾ����ϴ�.\n");
	return a + b;
}
// �����ε� ( �̸��� Add �� ���� �Լ��� ���� ���� �߰�
// ���� -> int�� �ν�, f�� ���� �Ǽ� -> float�� �ν�, f�� ������ ���� �Ǽ� -> double�� �ν�
// �Լ��� main()�Լ� �ۿ��� ���� ( ����ü�� �������� )
int main()
{
	Add(1, 1);
	Add(1.0f, 1.0f);
	Add(1.2, 1.3);


	int t_money = 0;// ���� ���� (�Լ� ��)
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);

	printf("main t_money=%d\n", t_money);
	printf("main g_money=%d\n", g_money);

	//�迭
	// int arrInt[10] = { 0 }; // ���� 0���� �ʱ�ȭ
	// int arrInt[10] = { 0, }; // ���� 0���� �ʱ�ȭ
	int arrInt[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // ������ �迭�� �ʱⰪ �ִ� ���
	arrInt[0] = 10; // �迭 0��°�� �� �ֱ�
	arrInt[4] = 40; // �迭 4��°�� �� �ֱ�
	arrInt[9] = 90; // 0������ �迭�� ���۵Ǳ� ������ 10���� �ƴ� 9���� ������ �迭 ��ȣ

	for (int i = 0; i < 10; i++)
	{
		printf("%d��° �迭 ���� %d�Դϴ�.\n", i, arrInt[i]); // 2�� �̻��� �Ķ��Ÿ ��� ���
	}

	int number = 0;
	for (int value : arrInt)
	{
		printf("for each %d��° �迭 ���� %d�Դϴ�.\n", number, value); // for each ( for : ) ���� -> �迭������ ��� ���� arrInt �迭�� ũ�⸸ŭ ����
		number++;
	}

	//fruitShop : ������ , shop : �����̸� (Struct�� ���)
	//fruitShop shop;
	//shop.appleA = 1000; //shop�̶�� ����ü ���� appleA������ �� �ֱ�
	//shop.appleA = 2000; //shop�̶�� ����ü ���� mangoA������ �� �ֱ�
	//shop.strawberryA = 3000; //shop�̶�� ����ü ���� strawberryA������ �� �ֱ�

	fruitShop shop[3];
	
	//Struct �Լ� ����
	shop[0].SetFruitValue(1000, 2000, 3000);
	shop[1].SetFruitValue(1100, 2100, 3100);
	shop[2].SetFruitValue(900, 1900, 2900);

	for (fruitShop stValue : shop)
	{
		stValue.printShopValue();
	}

	PhoneShop samsung[3];
	samsung[0].SetPhoneShopValue(100, 90, 80, 150);
	samsung[1].SetPhoneShopValue(110, 100, 90, 160);
	samsung[2].SetPhoneShopValue(90, 80, 70, 140);

	for (PhoneShop phValue : samsung)
	{
		phValue.printPhoneValue();
	}
}