#include <stdio.h>
#include "MyClass.h"


struct stMyStruct
{
	int a;
};

// Class(����,�ڷ���)
// Class�� ����� ���� Type�̶�� �Ѵ�.
// C�� struct�� Ȯ��� ���� -> C++�� Ŭ������ �� ���� ������(����) ������(private, protected, public)�� ����
// �׼����� ����Ǵ� ����� ������ �� �Լ��� �ִ� ����� ���� ���� �Ǵ� ������ ������ �����.
// �׼��� �����ڸ� ����Ͽ� ������ �� �Լ��� ����� �� ĸ��ȭ��� �Ѵ�.
// Class�� �ѱ۷� �����ϸ� ��Ʋ�̶�� �ǹ� -> ��밡���� ��ü�� �ƴ�
// ��ü�� �����ϱ� ���� ����� ��Ÿ����.

// ��ü(Object)
// Class�� ����ؼ� �����Ȱ� ��ü��� �Ѵ�.
// Class�� ������ �������� �����ǰ� �޸𸮿��� ������ ������

// ��ü ���� ���α׷��� -> ��ǻ�� ���α׷��� ��ɾ��� ������� ���� �ð����� ��� �������� ������ ����
// �� '��ü'���� �������� ������ ����� �ϴ� �з�����
// ������ ��ü�� �޽����� �ְ�ް�, �����͸� ���������� ó���� �� �ִ�.
class CMyClass
{
	// ���� ������
	// private : �ܺο��� ���� �Ұ�
	// protected : ��Ӱ����� �� ������ ����, �̿ܿ��� ���� �Ұ�
	// public : ��𼭵� ���� ����
	// ���� ���� �����ڰ� ������ �⺻������ private
	int a1; // Ŭ���� �ȿ� ����� ������ �ɹ� ������� �Ѵ�. ( �����ڵ��� ���������� �ɹ�������°� ǥ���ϱ� ���� m_�� ���̱⵵ �Ѵ�.)
	
public:
	// ������
	// Ŭ������ �����ɶ� ȣ��Ǵ� �Լ�
	// �������� �ʾƵ� �⺻ �����ڰ� ����
	// �����ڵ� private�� �ܺο� ȣ�� �Ұ�, �ݵ�� public���� �����ؾ��Ѵ�.
	// �����ڵ� �Ķ��Ÿ�� ������ Ÿ�Կ� ���� Overload( Ÿ�Ժ��� ������ �Լ��� ����) �� �� �ִ�.
	// (int valueA = 0)�� ���� ������� ������ �Ķ��Ÿ�� �־��� �� �ִ�.
	//  a(valueA), a1(0), c(0)<- �̷� ������� ������ ��������� �ʱⰪ�� ������ �� �ִ�.
	// �Ķ��Ÿ ������ ���°� �Է� ��Ŀ� ���� ������ �Ұ����ϸ� ������ �߻��Ѵ�
	CMyClass(int valueA = 0) : a(valueA), a1(0), c(0)
	{
		printf("������A ȣ���\n");
	}
	CMyClass(int valueA, int valueB) : a(valueA), a1(valueB), c(0)
	{
		printf("������B ȣ���\n");
	}
	CMyClass(int valueA, int valueB, int valueC) : a(valueA), a1(valueB), c(valueC)
	{
		printf("������C ȣ���\n");
	}
	// �ı���
	// Ŭ������ �ı��ɶ� ȣ��Ǵ� �Լ�
	// �������� �ʾƵ� �⺻ �ı��ڰ� ����
	// �ı��ڵ� public�� �ƴϸ� ȣ�� �Ұ�, �ݵ�� public���� �����ؾ��Ѵ�.
	~CMyClass()
	{
		printf("�ı��� ȣ���\n");
	}

	void PrintB()
	{
		printf("B=%d", a1);
	}

	void PrintAllValue()
	{
		printf("A=%d, B=%d, C=%d\n", a, a1, c);
	}

	void SetC(int num)
	{
		// this : Ŭ���� �ȿ��� �Լ��� ȣ���� ��ü�� �ǹ���
		// �Ϲ������� this Ű����� ������
		this->c = num;
	}

	// ������ �����ε�(Operator Overloading)
	// ���Կ����� ( �⺻������ ������ )
	// const CMyClass& : �������� ��ȯ�� ������
	// operator=: �����ε� �� ������
	// (const CMyClass& other) : �����ʿ� �Էµ� ����
	const CMyClass& operator = (const CMyClass& other)
	{
		a = other.a;
		a1 = other.a1;
		c = other.c;

		return *this;
	}

	const CMyClass& operator+(const CMyClass& other)
	{
		return CMyClass(a + other.a, a1 + other.a1, c + other.c);
	}

public:
	int a;
protected:
private:
	int c;
};

int main()
{
	{
		int num = 100;
		int* pNum = &num;//pNum ������ �������� num�� �ּ� ���� ����. ��, pNum�� num������ ����Ű�� �ִ�.
		printf("&pNum != &num ? %d\n", (int(&pNum) != int(&num)));//������ ������ ������ ������ �ּ� ���� �����Ѵ�. -> ������ ������ �ּҰ��� �����Ͱ� ����Ű�� �ִ� �ּ� ���� �ٸ�
		// ���۷��� ����
		// �޸� ������ ���� �ʰ� ������ �����Ͽ� �޸𸮸� ȿ�������� ����ϱ� ���� ������
		int& refNum = num;
		printf("refNum == &num ? %d\n", (int(&refNum) == int(&num)));// ���۷��� ������ ���� ����� �ּ� ���� �����ϴ�.
	}
	stMyStruct stMy;
	stMy.a = 0;

	CMyClass CM(100); // -> ������A ȣ���
	CMyClass CM2(100,200); // -> ������B ȣ���
	printf("CM.a=%d\n", CM.a);
	CM.a = 0;

	CM.SetC(0);// Ư�� ������ �����ϱ� ���� �Լ��� �����ؼ� �����ϴ°� �⺻ ��Ģ�̴�.
	//CM.c = 100; // ���� ������ private���� �Ǿ��ִٸ� 'c'�������� ���� �������� ����� �ǵ��� �����ڿ��� �ִٴ� ��

	CMyClass2 aa;

	CMyClass CM3;

	CM.a = 1000;
	CM.PrintAllValue();
	CM2.PrintAllValue();
	CM3 = CM + CM2;
	CM3.PrintAllValue();

} // <- �ı��� ȣ���