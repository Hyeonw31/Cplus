#include <iostream>
#include <stdlib.h>

int main()
{
	//컴퓨터는 0,1 표현할수 있는 1개를 Bit라고 한다 -> 2진법 4개 bit일때는 0~15 16개 숫자를 표현
	// 0000 = 0, 0001 = 1, 0010 = 2, 0011 = 3 , 0100 =4, 1000 = 4+3+1 = 8, 1111 = 8+4+2+1 = 15
	// 0000 0000 = 0, 0000 0001=1, 0000 0010 = 2,  0000 0100 = 4, 0000 1000 = 8, 0001 0000 = 16, 0010 0000 = 32, 1111 1111 = 255
	// 1000 0000 : 부호 비트로 빠진다.-> 맨 앞의 부호가 1이면(-), 0이면 (+)
	// 0111 1111 (=127) + 0000 0001(=1) = 1000 0000 = 128(-128)
	// 0000 0001 (=1) + 1111 1111 (=-1) = 0
	signed char c; // -128~127 // 1Byte
	unsigned char uc; // 0~255 // 1Byte
	c = 128;


	//short int : short ( 작은 정수 )
	short s;// -32,768 ~ 32,767 // 0000 0000 0000 0000 -> 2Byte
	//long int : long ( 큰 정수 )
	long l;//4Byte

	//int 자료형
	//최초 16bit 자료형 16bit
	//32bit 아키텍처 일때는 32bit
	//64bit 아키텍처 일때는 32bit
	//예외 : int64 = 64bit
	int A;//숫자, 음수, 양수, 정수 // 
	unsigned int uA;//숫자, 양수, 정수

	float f = 0.1f;//4Byte
	f = 2.0f;
	f = 2.f;
	//부동소수점
	// 0001 0000 = 1 / 0000 1000 = 0.5 / 0000 0100 = 0.25 / 0000 0010 = 0.125 / 0000 0001 = 0.0625
	// 0000 1101 = 0.5 + 0.25 + 0.0625 = 0.8125
	//32bit-> 0(부호부) / 000 0000 0(지수부) / 000 0000 0000 0000 0000 0000(가수부)
	//21.8125 = 21(10101).8125(0.1101)-> 0(부호부) / 10101.1101(21.8125)->0.101011101 * 2^5(=10101.1101)-> 5승을 2진법으로 바꾸면 101
	//-> 0(부호부) / 000 0010 1(지수부) / 101 0111 0100 0000 0000 0000(가수부)
	// 명확하게 0.1을 표기하려고 한다면 0000 0001 1011 1001
	// float a = 1.0;
	// int n = 1;
	// n ==a ? 1==0.999999999999999999999998

	double d = 0.1; // 8Byte float보다 더 정밀하다

	int i2 = 0;
	float f2 = 1.0f;
	i2 = (int)f2;
	f2 = (float)i2;
	f2 = float(i2);
	f2 = (float)(i2 + 1);
	i2 = int(f2) + 1;

	//연산자 -> +, -, *, /, %(나머지), ++, --
	i2 = 1 + 1;
	i2 = i2 + 1;
	i2 += 1; // i2 = i2 + 1; 과 동일

	float divide = 10 / 2.0f; // 10 * 0.5f; (/보다는 *를 더 많이 쓴다)
	float remain = 10 % 3; // 실수끼리는 나머지 연산 불가능(몇번째 소수점 자리를 기준으로 연산을 해야하는지 알수없기 때문)

	int add = 0, minus = 10;// 변수를 선언하면 초기화 값을 넣어준다.
	
	

	int addR = 0, addL = 0;
	addL = ++add;// ++add;// 전치 연산
	addR = add++; //add++;// 후치 연산 -> 대입연산자(=)보다 더 뒤에 실행

	minus--;
	--minus;

	//논리연산자 
	//&&(and), ll(OR), !(NOT)
	// and : 둘다 참이면 참, OR : 둘중에 하나라도 참이면 참, NOT : 참이면 거짓, 거짓이면 참
	// Yes : 0이 아닌 값(True=1)
	// NO : 0일 때(False=0)
	// bool bResult = true;
	// bool bResult = false;
	// bool bResult = 1;// true 넣은 것과 같다.
	bool bResult = 0;// false 넣은 것과 같다.


	// =(주석) : 컴파일에 포함되지 않는 문자로 코드로 인식하지 않는다.
	/*주석 : 컴파일에 포함되지 않는 문자로 코드로 인식하지 않는다. */

	// 자주쓰는 단축키
	// 지정한 구문 주석 : Ctrl + k-> Ctrl + c
	// 지정한 구문 주석 해제 : Ctrl + k -> Ctrl + u
	//Alt+Drag : 부분 영역 지정

	// 디버깅 단축키
	// F5 : 디버깅 시작, 디버깅 계속 진행
	// F9 : 중단점 생성 및 해제
	// F10 : 디버깅 중 다음 구문 진행
	// F11 : 디버깅 중 함수 내부 구문 진행
	// Shift + F5 : 디버깅 종료

	//비교 연산자
	// == : 같으면 true, 아니면 false , != : 같으면 false, 아니면 true
	// > : 왼쪽이 오른쪽보다 크면 true, 아니면 false ( 반대 : < )
	// >= :왼쪽이 오른쪽보다 크거나 같으면 true, 아니면 false ( 반대 : <= )
	bResult = (10 == 11);
	bResult = (10 != 11);
	bResult = (10 > 11);
	bResult = (10 < 11);

	int nResult = (10 == 11) ? 100 : 50;

	//문제 아래 time 들었는 초 값에 분과 시간을 구해라
	unsigned int sec = 987654321;

	unsigned int day = 0, hour = 0,min = 0, sec1 = 0;
	day = (sec / 86400);
	hour = (sec % 86400)/3600 ;
	min = ((sec % 86400) % 3600) / 60;
	sec1 = ((sec % 86400) % 3600) % 60;



	printf("%d", i2);

	system("pause");
}