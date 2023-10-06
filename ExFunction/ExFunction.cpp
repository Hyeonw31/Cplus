#include <stdio.h>
#include "Devide.h"
#include "Minus.h"
#include "Multi.h"
#include "Sum.h"
// 함수 이름 : Sum
// 매개 변수(파라메타) : int a, int b
// 반환 값 : int
// a와 b를 합한 결과를 반환하시오
//int Sum(int a, int b)
//{
//	return a + b;
//}

// 함수 이름 : Minus
// 매개 변수(파라메타) : int a, int b
// 반환 값 : int
// a와 b를 빼기한 결과를 반환하시오
//int Minus(int a, int b)
//{
//	return a - b;
//}

// 함수 이름 : Multi
// 매개 변수(파라메타) : int a, int b
// 반환 값 : int
// a와 b를 곱하기한 결과를 반환하시오
//int Multi(int a, int b)
//{
//	return a * b;
//}
// 함수 이름 : Divid
// 매개 변수(파라메타) : float a, float b
// 반환 값 : float
// a와 b를 나누기한 결과를 반환하시오
//float Divid(float a, float b)
//{
//	return a / b;
//}

//함수 이름 : Average
//파라메타 int &Sum, int a, int b, int c
//반환값 없음
// 레퍼런스 변수 Sum으로 a, b, c에 평균 값을 반환
 void Average(int &Sum, int a, int b, int c)
{	
	 Sum = (a + b + c) / 3;
}

//함수 이름 ArraySum
//파라메타 int* arr, int length
//반환 값 : int
//배열 "arr"와 배열의 길이 "length"를 파라메타로 받아서 모든 배열의 합을 반환

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

// 클래스 이름 : CShop
// 맴버 변수 : m_value(기본값:0)
// 맴버 함수 추가 : printValue
// printValue 함수 결과 : "Value=%d"로 m_value 출력
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

// 클래스 이름 : CPhoneShop
// 부모 클래스 : CShop
// 생성자 파라메타 : int PhoneCnt ( m_PhoneCnt에 값 적용 )
// 생성자 파라메타 : int PhonePrice ( m_PhonePrice에 값 적용 )
// 맴버 변수 : m_PhoneCnt
// 맴버 변수 : m_PhonePrice
// printValue 함수 결과 : "Value=%d"로 m_PhoneCnt * m_PhonePrice출력

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

// CPhoneShop(10, 100) 생성 후 객체에 printValue 출력
// 클래스 이름 : CFruitShop
// 생성자 파라메타 : int FruitCnt ( m_FruitCnt에 값 적용 )
// 생성자 파라메타 : int FruitPrice ( m_FruitPrice에 값 적용 )
// 부모 클래스 : CShop
// 맴버 변수 : m_FruitCnt
// 맴버 변수 : m_FruitPrice
// printValue 함수 결과 : "Value=%d"로 m_FruitCnt * m_FruitPrice출력
// CFruitShop(10, 100) 생성 후 객체에 printValue 출력
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
	//printf로 "Sum=%d\n"로 Sum함수 결과 출력
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