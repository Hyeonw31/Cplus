#include <stdio.h>
#include "Devide.h"
#include "Minus.h"
#include "Multi.h"
#include "Sum.h"
// �Լ� �̸� : Sum
// �Ű� ����(�Ķ��Ÿ) : int a, int b
// ��ȯ �� : int
// a�� b�� ���� ����� ��ȯ�Ͻÿ�
//int Sum(int a, int b)
//{
//	return a + b;
//}

// �Լ� �̸� : Minus
// �Ű� ����(�Ķ��Ÿ) : int a, int b
// ��ȯ �� : int
// a�� b�� ������ ����� ��ȯ�Ͻÿ�
//int Minus(int a, int b)
//{
//	return a - b;
//}

// �Լ� �̸� : Multi
// �Ű� ����(�Ķ��Ÿ) : int a, int b
// ��ȯ �� : int
// a�� b�� ���ϱ��� ����� ��ȯ�Ͻÿ�
//int Multi(int a, int b)
//{
//	return a * b;
//}
// �Լ� �̸� : Divid
// �Ű� ����(�Ķ��Ÿ) : float a, float b
// ��ȯ �� : float
// a�� b�� �������� ����� ��ȯ�Ͻÿ�
//float Divid(float a, float b)
//{
//	return a / b;
//}

//�Լ� �̸� : Average
//�Ķ��Ÿ int &Sum, int a, int b, int c
//��ȯ�� ����
// ���۷��� ���� Sum���� a, b, c�� ��� ���� ��ȯ
 void Average(int &Sum, int a, int b, int c)
{	
	 Sum = (a + b + c) / 3;
}

//�Լ� �̸� ArraySum
//�Ķ��Ÿ int* arr, int length
//��ȯ �� : int
//�迭 "arr"�� �迭�� ���� "length"�� �Ķ��Ÿ�� �޾Ƽ� ��� �迭�� ���� ��ȯ

 int ArraySum(int* arr, int length)
 {
	 int sum = 0;
	 for(int i = 0; i<length; ++i)
	 {
		 sum += arr[i];
		 printf("%d\n",sum);
	 }
	 return sum;

 }

// Ŭ���� �̸� : CShop
// �ɹ� ���� : m_value(�⺻��:0)
// �ɹ� �Լ� �߰� : printValue
// printValue �Լ� ��� : "Value=%d"�� m_value ���
 class CShop
 {
 public:
	 CShop(int m_value = 0) 
	 {
		 
	 }
	 void printValue()
	 {
		 printf("Value=%d\n", m_value);
	 }
 public:
	 int m_value = 0;
	
	
	 
	
};

// Ŭ���� �̸� : CPhoneShop
// �θ� Ŭ���� : CShop
// ������ �Ķ��Ÿ : int PhoneCnt ( m_PhoneCnt�� �� ���� )
// ������ �Ķ��Ÿ : int PhonePrice ( m_PhonePrice�� �� ���� )
// �ɹ� ���� : m_PhoneCnt
// �ɹ� ���� : m_PhonePrice
// printValue �Լ� ��� : "Value=%d"�� m_PhoneCnt * m_PhonePrice���

 class CPhoneShop : public CShop
 {
 public:
	 CPhoneShop(int PhoneCnt, int PhonePrice) : m_PhoneCnt(PhoneCnt), m_PhonePrice(PhonePrice)
	 {

	 }

	 void printValue()
	 {
		 printf("Value=%d\n", m_PhoneCnt * m_PhonePrice);
	 }
 public:
	 int m_PhoneCnt;
	 int m_PhonePrice;
 };

// CPhoneShop(10, 100) ���� �� ��ü�� printValue ���
// Ŭ���� �̸� : CFruitShop
// ������ �Ķ��Ÿ : int FruitCnt ( m_FruitCnt�� �� ���� )
// ������ �Ķ��Ÿ : int FruitPrice ( m_FruitPrice�� �� ���� )
// �θ� Ŭ���� : CShop
// �ɹ� ���� : m_FruitCnt
// �ɹ� ���� : m_FruitPrice
// printValue �Լ� ��� : "Value=%d"�� m_FruitCnt * m_FruitPrice���
// CFruitShop(10, 100) ���� �� ��ü�� printValue ���
 class CFruitShop : public CShop
 {
 public:
	 CFruitShop(int FruitCnt, int FruitPrice) : m_FruitCnt(FruitCnt), m_FruitPrice(FruitPrice)
	 {

	 }

	 void printValue()
	 {
		 printf("Value=%d", m_FruitCnt * m_FruitPrice);
	 }
	 int m_FruitCnt;
	 int m_FruitPrice;
 };




int main()
{
	//printf�� "Sum=%d\n"�� Sum�Լ� ��� ���
	int sResult = Sum(1, 1);
	printf("Sum=%d\n", sResult);
	int mResult = Minus(3, 1);
	printf("Minus=%d\n", mResult);
	int tResult = Multi(5, 2);
	printf("Multi=%d\n", tResult);
	float dResult = Divid(4, 3);
	printf("Divid=%f\n", dResult);
	Average(sResult, 4, 5, 6);
	printf("Average=%d\n", sResult);
	int intsum[4] = { 1,2,3,4 };
	ArraySum(intsum, 4);
	CShop cS(100);
	cS.printValue();

	CPhoneShop pS(10, 100);
	pS.printValue();
}