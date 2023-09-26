#include <stdio.h>

void BuyItem(int *Money, int price)
{
	//int*Money는 메모리의 복제가 일어나지 않는다 -> 메모리의 효율적인 관리, 데이터 참조가 편리함,
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
		pPS->iPhoneCnt--;// 포인트로 참조하는 구조체(struct)의 변수는 "->"키워드로 참조한다.
		break;
	case ePhoneType::Galaxys23:
		pPS->Galaxys23--;// 포인트로 참조하는 구조체(struct)의 변수는 "->"키워드로 참조한다.
		break;
	case ePhoneType::GalaxyFold:
		pPS->GalaxyFold--;// 포인트로 참조하는 구조체(struct)의 변수는 "->"키워드로 참조한다.
		break;
	case ePhoneType::GalaxyZ:
		pPS->GalaxyZ--;// 포인트로 참조하는 구조체(struct)의 변수는 "->"키워드로 참조한다.
		break;
	default:
		break;
	}
	
}


int main()
{
	int a = 0; //int -> 4Byte
	int b = 0;
	//포인터를 사용하는 이유 : 1) 메모리의 효율적인 관리 2) 데이터 참조가 편리함,
	// int* pA : 포인터 변수의 선언(pA에 들어가있는 주소에 int형의 크기만큼 참조)
	// nullptr : 포인터 변수의 초기화 값(주소값이 비어있음)
	//이전에는 NULL을 사용 ( NULL = 0을 의미) 했지만 숫자 0이랑 의미가 동일해서 문제가 발생 -> '주소값이 비어있음'이라는 명확한 의미를 가진 nullptr을 사용 
	// 포인터의 크기 : x32에는 4Byte, x64에는 8Byte
	int* pA = nullptr;
	pA = &a;//a의 주소값을 pA에 넣는다는 의미
	//* : 레퍼런스 참조한다.(주소가 가르키고 있는 값을 참조한다.)
	b = *pA; // b에 pA가 가르키고 있는 주소의 값을 넣는다.
	*pA = 10; // pA가 가르키고 있는 주소의 값을 10으로 변경한다

	//int num1 = 0;
	//int num2 = 0;
	//*pNum = 20;
	//printf("pNum=%d\n", *pNum);
	//pNum = &num2;//pNum에 num2에 주소값을 넣는다.(pNum은 num2를 가르키고 있는 상태)
	//printf("pNum=%d\n", *pNum); //num2 값인 0
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

	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
	//배열과 포인터

	int arrInt[10] = { 0,10,20,30,40,50,60,70,80,90 };
	int* pInt = nullptr; //pInt에 들어가있는 주소에 int형의 크기만큼 참조
	pInt = arrInt;
	printf("plnt=%d\n", *pInt);
	pInt += 1;//다음 배열 포인터에 주소를 가리킨다.
	printf("plnt=%d\n", *pInt);

	short arrS[10] = { 0,10,20,30,40,50,60,70,80,90 };
	pInt = (int*)arrS;//(int*)을 사용해서 int*로 강제로 형변환(Cast)한다.
	pInt += 1;// -> 결과값이 20이 나오는 이유는 short : 2byte이고 int는 4byte이기 때문에 int형의 크기만큼 +1이 되면 short형의 크기는 +2이 된 것과 같기 때문.
	// pInt가 int*이므로 int(4Byte)만큼 다음 주소 값을 참조한다. int(4Byte)만큼 이동한 주소값은 Short(2Byte) 2번 이동한 값.
	short* pS = (short*)pInt;
	printf("pS=%d\n", *pS);

	//아래 배열을 낮은 숫자 순서대로 출력
	int arr[10] = { 10, 2, 78, 53, 6, 33, 27, 99, 7, 31 };

	//for (int i = 0; i < 10; i++)
	//{
	//	int lowestIndex = i; // 가장 낮은 index 저장
	//	
	//	for (int j = i + 1;j < 10;j++)
	//	{
	//		if (arr[lowestIndex] > arr[j])
	//		{
	//			//lowestIndex와 j를 순서대로 비교
	//			//j index에 값이 낮으면 j는 새로운 lowestIndex
	//			lowestIndex = j;
	//		}
	//	}
	//	//j for문이 종료되면 lowestindex에는 가장 낮은 수의 index 값이 저장
	//	//i 는 순차적으로 돌면서 가장 낮은 수가 들어가야함
	//	// lowestindex값과 i index 값을 교체한다.
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
