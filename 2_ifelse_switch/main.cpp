
#include <iostream>
#include <stdio.h>
#include <bitset>


// c++의 컴파일(4단계)
// c++에서 사람이 작성한 소스코드를 컴퓨터가 읽을수 있는 코드로 변환하여 실행할수 있는 파일로 변환하는 과정

// 1. 전처리(Preprocessing) 단계 : #include 와 # define 과 같은 전처리기 매크로들을 처리(수용)하는 단계
// 2. 컴파일(Compile) 단계 : 각각의 소스 파일들을 어셈블리 명령어(본인이 알아들을 수 있는 기계어)로 변환 
// 3. 어셈블(Assemble) 단계 : 어셈블리 코드들을 실제 기계어로 이루어진 목적 코드(Object file)로 변환(.obj 파일 생성)하는 단계
// 4. 링킹(Linking) 단계 : 각각의 목적 코드들을 한데 모아서 하나의 실행 파일을 생성하는 단계


//메모리 영역
// 1. Code 영역 : 실행할 코드가 저장되어 있는 영역(기계어로 존재)
// 2. Data 영역 : 전역변수, Static 변수들이 저장, 프로세스가 종료될 때까지 메모리에 저장됨
// 3. Stack 영역 : 지역변수, 매개변수들이 저장, 함수가 호출되면 생성되고 함수가 종료되면 시스템에 반환
// 4. Heap 영역 : malloc 또는 new 함수에 의해서 동적으로 할당되는 영역, malloc() 또는 new연산자로 할당, free() 또는 delete 연산자로 해제

#define LEVEL_REWARD_10 0b00000001 ; // 1
#define LEVEL_REWARD_20 0b00000010 ; // 2
#define LEVEL_REWARD_30 0b00000100 ; // 4
#define LEVEL_REWARD_40 0b00001000 ; // 8
#define LEVEL_REWARD_50 0b00010000 ; // 16
#define LEVEL_REWARD_60 0b00100000 ; // 32


int main()
{
    {
    /*    int a = 0;
        std::cin >> a;
        std::cout << a << "를 입력하셨습니다.";*/
    }

   // {
   //      %d : 부호 있는 10진수 정수
   //     %|64d : 부호 있는 10진수 정수(8Byte)
   //     %u : 부호 없는 10진수 정수
   //     %I64u : 부호 없는 10진수 정수(8Byte)
   //      %f : 부호 있는 실수(12.3456789);
   //      %e,%E : 부호 있는 실수(1.23456789e + 001 )
   //      %i : 부호 있는 10진수 정수(10진수/8진수/16진수 입력 가능)
   //      %x : 부호 없는 16진수 정수(0123456789abcdef)
   //      %X : 부호 없는 16진수 정수(0123456789ABCDEF)
   //      %o : 부호 없는 8진수
   //      %p : 포인터 값을 16진수로 표기
   //      %c : 단일 문자 출력
   //      %s : 문자열 출력

   // int a = 0, b=0;
   // scanf_s("%d %d", &a,&b);
   // printf("a더하기 b는? %d", a+b);
   // 함수 입력하다 실수로 넘어가서 링크가 안되면 ctrl + space
   // }

    //bool bReulst = false;
    //if (true)
    //{
    //    printf("참");
    //}
    //else
    //{
    //    printf("거짓")
    //}

    //int Score = 0;
    //printf("Score를 입력해주세요 :");
    //scanf_s("%d", &Score);


    //if (Score >= 90)
    //{
    //    printf("A학점", Score);
    //}
    //else if (Score>=80)
    //{
    //    printf("B학점");
    //}
    //else if (Score >= 70)
    //{
    //    printf("C학점");
    //}
    //else if (Score >= 60)
    //{
    //    printf("D학점");
    //}
    //else
    //{
    //    printf("F학점");
    //}

    //int backNumber = 0;
    //scanf_s("%d", &backNumber);


    //switch (backNumber)
    //{
    //case 10:
    //case 11:
    //{
    //    //10,11일 때 실행
    //    printf("포수");
    //}
    //break;

    //case 9:
    //{
    //    //9일 때 실행
    //    printf("투수");
    //}
    //break;

    //default:
    //{
    //    //위에 cast가 모두 아니면 실행
    //    printf("후보");
    //}
    //break;
    //}

    //return 0;

    /*int light = 0;
    scanf_s("%d", &light);
    if (light == true)
    {
        printf("파랑");
    }
    else 
    {
        printf("빨강");
    }
    return 0;*/
    //light가 true(=1) 이면 "파랑"출력
    //light가 false(=0)이면 "빨강"출력

    /*int ninput = 0;
    scanf_s("%d", &ninput);
    if (ninput > 100)
    {
        printf("100보다 크다");
    }
    else if (ninput <100 )
    {
        printf("100보다 작다");
    }
    return 0;*/

    //ninput 값이 100보다 크면 "100보다 크다" 출력
    //ninput 값이 100보다 작으면 "100보다 작다" 출력

  /*  int myScore = 0, otherScore = 0;
    scanf_s("%d %d", &myScore, &otherScore);
    if (myScore>otherScore)
    {
        printf("3점");
    }
    else if (myScore == otherScore)
    {
        printf("1점");
    }
    else if (myScore<otherScore)
    {
        printf("0점");
    }*/
    //myScore가 otherScore보다 크면 "3점"출력
    //myScore가 otherScore와 같으면 "1점"출력
    //myScore가 otherScore보다 작으면 "0점"출력

    //int nCode = 0;
    //scanf_s("%d", &nCode);

    //switch (nCode)
    //{
    //case 1:
    //case 3:
    //{
    //    printf("남자");
    //}
    //    break;
    //case 2:
    //case 4:
    //{
    //    printf("여자");
    //}
    //break;

    //default:
    //    break;
    //}
    //nCode가 1이나 3이면 "남자"출력
    //nCode가 2이나 4이면 "여자"출력

   /* int nCode2 = 0;
    scanf_s("%d", &nCode2);
    
    switch(nCode2)
    {
    case 1:
    case 2:
    {
        printf("2000년 미만 출생");
    }
    break;
    case 3:
    case 4:
    {
        printf("2000년 이후 출생");
    }
    break;
    default:
        break;

    }*/
    //nCode2가 1이나 2이면 "2000년 미만 출생" 출력
    //nCode2가 3이나 4이면 "2000년 이후 출생" 출력

  
    // C++ 11버전 부터 숫자 앞에 0b를 붙이면 2진법 표기 가능
    // 2진법 표기 앞에 0b를 붙인다 ( 0b01011101 ) 
    // 8진법 표기 : 앞에 0을 붙인다 (0123)
    // 16진법 표기 : 앞에 0x를 붙인다 (0xFF) (A:10,B:11,C:12,D:13,E:14,F:15)
int A = 0b01011101;
int B = 0123;
int C = 0xFF;
printf("2진법(0b01011101) : %d\n", A);
printf("8진법(0123) : %d\n", B);
printf("16진법(0xFF) : %d\n", C);

// 비트연산자
//곱(&) : 둘다 1이면 1, 아니면 0
//합(|) : 둘 중에 하나라도 1이면 1 아니면 0
// XOR(^) : 둘이 같으면 0, 아니면 1
// 반전(~) : 0이면 1, 1이면 0

char bitNum = 0b01001010;
char bitResult = 0;
bitResult = bitNum & 0b11010100;

// 0b01001010 , *0b11010100
// -> 0b01000000
std::cout << std::bitset<8>(bitResult) << std::endl; //std::endl은 개행(printf에 \n과 같다.)

bitResult = bitNum | 0b11010100;

// 0b01001010 , +0b11010100
// -> 0b11011110
std::cout << std::bitset<8>(bitResult) << std::endl; //std::endl은 개행(printf에 \n과 같다.)

bitResult = bitNum ^ 0b11010100;

// 0b01001010 ^ 0b11010100
// -> 0b01100001
std::cout << std::bitset<8>(bitResult) << std::endl; //std::endl은 개행(printf에 \n과 같다.)

bitResult = ~0b11010100;
// ~0b11010100
// -> 0b00101011
std::cout << std::bitset<8>(bitResult) << std::endl; //std::endl은 개행(printf에 \n과 같다.)

//10레벨 달성 보상 ( 재수령 불가하기 때문에 받았는지 체크해야함 )
//bool isGetLevel10Reward = true;
//20레벨 달성 보상
//bool isGetLevel20Reward = true;
//30레벨 달성 보상
//bool isGetLevel30Reward = false;
//40레벨 달성 보상
//bool isGetLevel40Reward = true;
//50레벨 달성 보상
//bool isGetLevel50Reward = false;
//60레벨 달성 보상
//bool isGetLevel60Reward = false;

// 비트 1로 설정
char MyReward = 0b00000000;
MyReward = MyReward | LEVEL_REWARD_10; // 레벨 10 보상 수령
std::cout << "MyReward Set = " << std::bitset<8>(MyReward) << std::endl;


//비트 활성화 되어있는지 체크
bool isEnable = false;
isEnable = MyReward & LEVEL_REWARD_10;//레벨 10 보상 받았는지 확인
std::cout << "MyReward Check = " << isEnable << std::endl;


//비트 0으로 설정
MyReward = MyReward & ~LEVEL_REWARD_10; // 레벨 10 보상 수락 초기화
std::cout << "MyReward Disable = " << std::bitset<8>(MyReward) << std::endl;



}



