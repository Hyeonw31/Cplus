#include<stdio.h>

//상속
// 기존 클래스에 기능을 추가하거나 재정의하여 새로운 클래스를 정의하는 기능
// 생물 - '기본 최상위 클래스'라고 정의
// 동물 - 생물 + 움직인다 라는 기능을 추가
// 포유류 - 동물 + 젓먹이를 한다는 기능을 추가
// 사람 - 포유류 + 지적 능력 기능을 추가
// 사람은 포유류의 기능을, 포유르는 동물의 기능을, 동물은 생물의 기능을 상속받음 

class CBase
{
public:
	CBase(int x) :m_X(x)
	{
		printf("부모 클래스(CBase)생성\n");
	}
	~CBase()
	{
		printf("부모 클래스(CBase)파괴\n");
	}

public:
	int m_X;
};

// 상속 방법 : ": public CBase"와 같이 클래스 뒤에 부모 클래스를 선언 
class CChild : public CBase
{
public:
	// ":"에 뒤에 부모클래스CBase(x)를 넣어서 부모클래스 생성자 호출
	// 부모 클래스의 생성자가 먼저 호출 후 자식 생성자가 호출됨
	CChild(int x, int y):m_Y(y), CBase(x)
	{
		printf("자식 클래스(CChild)생성\n");

	}
	// 자식 파괴자 먼저 호출 후 부모 파괴자 호출됨
	~CChild()
	{
		printf("자식 클래스(CChild)파괴\n");
	}
public:
	int m_Y;
};

int main()
{
	CBase base(10);
	base.m_X = 100;

	CChild child(10, 20);
	child.m_X = 200; // 상속받은 부모의 기능 그대로 사용 가능
}