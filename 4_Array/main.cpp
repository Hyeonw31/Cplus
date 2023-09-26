#include <stdio.h>


// c++의 컴파일(4단계)
// c++에서 사람이 작성한 소스코드를 컴퓨터가 읽을수 있는 코드로 변환하여 실행할수 있는 파일로 변환하는 과정

// 1. 전처리(Preprocessing) 단계 : #include 와 # define 과 같은 전처리기 매크로들을 처리(수용)하는 단계
// 2. 컴파일(Compile) 단계 : 각각의 소스 파일들을 어셈블리 명령어(본인이 알아들을 수 있는 기계어)로 변환 
// 3. 어셈블(Assemble) 단계 : 어셈블리 코드들을 실제 기계어로 이루어진 목적 코드(Object file)로 변환(.obj 파일 생성)하는 단계
// 4. 링킹(Linking) 단계 : 각각의 목적 코드들을 한데 모아서 하나의 실행 파일을 생성하는 단계

#include "money.h"
#include "calcFunc.h"

//메모리 영역
// 1. Code 영역 : 실행할 코드가 저장되어 있는 영역(기계어로 존재)
// 2. Data 영역 : 전역변수, Static 변수들이 저장, 프로세스가 종료될 때까지 메모리에 저장됨
// 3. Stack 영역 : 지역변수, 매개변수들이 저장, 함수가 호출되면 생성되고 함수가 종료되면 시스템에 반환
// 4. Heap 영역 : malloc 또는 new 함수에 의해서 동적으로 할당되는 영역, malloc() 또는 new연산자로 할당, free() 또는 delete 연산자로 해제

int g_money = 0;//전역 변수(함수 밖, 1개만 존재 가능, 다른 cpp에서는 사용 불가능)

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
		printf("핸드폰 매장 가격 아이폰 : %d, 제트플립 : %d, 갤럭시23 : %d, 갤럭시폴더 : %d\n", iPhoneA, zFlipA, GalaxyS23A, GalaxyFoldA);
	}
};


struct fruitShop
{
	//구조체 내부에 선언한 변수는 구조체 자체가 사라지지 않으면 사라지지 않음
	int appleA;
	int mangoA;
	int strawberryA;

	//구조체 생성자 ":"이 구문 오른쪽에 변수의 초기값을 세팅한다. -> 초기화
	fruitShop() : appleA(1000), mangoA(1000), strawberryA(1000) 
	{

	}
	//구조체 내부에 함수 생성
	void SetFruitValue(int apple, int mango, int strawberry)
	{
		int appleB = apple;//SetFruitValue 함수가 종료되면 사라지는 변수.
		appleA = apple;
		mangoA = mango;
		strawberryA = strawberry;
	}

	void printShopValue()
	{
		printf("과일가게 가격 사과 : %d, 망고 : %d, 딸기 : %d\n", appleA, mangoA, strawberryA);
	}
};

// 1+1 =2
int Add(int a, int b)
{
	printf("int형 변수가 출력되었습니다.\n");
	return a + b;
}
// 1.2 + 1.3 = 2.5
float Add(float a, float b)
{
	printf("float형 변수가 출력되었습니다.\n");
	return a + b;
}

double Add(double a, double b)
{
	printf("double형 변수가 출력되었습니다.\n");
	return a + b;
}
// 오버로드 ( 이름이 Add 로 같은 함수에 여러 형태 추가
// 정수 -> int로 인식, f를 붙인 실수 -> float로 인식, f를 붙이지 않은 실수 -> double로 인식
// 함수는 main()함수 밖에서 생성 ( 구조체도 마찬가지 )
int main()
{
	Add(1, 1);
	Add(1.0f, 1.0f);
	Add(1.2, 1.3);


	int t_money = 0;// 지역 변수 (함수 안)
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);

	printf("main t_money=%d\n", t_money);
	printf("main g_money=%d\n", g_money);

	//배열
	// int arrInt[10] = { 0 }; // 전부 0으로 초기화
	// int arrInt[10] = { 0, }; // 전부 0으로 초기화
	int arrInt[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // 각각에 배열에 초기값 넣는 방법
	arrInt[0] = 10; // 배열 0번째에 값 넣기
	arrInt[4] = 40; // 배열 4번째에 값 넣기
	arrInt[9] = 90; // 0번부터 배열이 시작되기 때문에 10번이 아닌 9번이 마지막 배열 번호

	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 배열 값은 %d입니다.\n", i, arrInt[i]); // 2개 이상의 파라메타 출력 방법
	}

	int number = 0;
	for (int value : arrInt)
	{
		printf("for each %d번째 배열 값은 %d입니다.\n", number, value); // for each ( for : ) 구문 -> 배열에서만 사용 가능 arrInt 배열의 크기만큼 생성
		number++;
	}

	//fruitShop : 변수형 , shop : 변수이름 (Struct에 사용)
	//fruitShop shop;
	//shop.appleA = 1000; //shop이라는 구조체 안의 appleA변수에 값 넣기
	//shop.appleA = 2000; //shop이라는 구조체 안의 mangoA변수에 값 넣기
	//shop.strawberryA = 3000; //shop이라는 구조체 안의 strawberryA변수에 값 넣기

	fruitShop shop[3];
	
	//Struct 함수 사용법
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