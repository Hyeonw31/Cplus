#include <iostream>

class CBase {
public:
	int a = 1;
};

class CChild1 : public CBase
{
public:
	void printB()
	{
		printf("Child1::printB=%f\n", b);
	}
	float b = 3.14f;
};

class CChild2 : public CBase
{
public:
	void printB()
	{
		printf("Child2::printC=%d\n", c);
	}
	int c = 3;
};
int main()
{
	CBase* pBase = new CChild1;
	// pBase ->printB; --> CBase* ����Ʈ�� ĳ����(�о����) �ϱ� ������ printB�� ������ �Ұ����ϴ�.

	// float b = 3.14f;
	// int a = (int)b; -> ���� ����ȯ

	// �⺻ ĳ���� ���
	// ������ CBase* �����Ϳ� �޸𸮸� CChild1 Ŭ���� �޸� Ʋ�� ���� �о�´�.
	CChild1* pChild1 = (CChild1*)pBase;
	pChild1->printB();
	// �Ʒ��� ���� ����Ʈ�� �߸� ����Ű�� �Ǽ��� �� ��� ������ �߻��� �� �ִ�.
	// ������ int* �������� �޸𸮸� CChild*�� ���߸� ���� ���� �ʾ� ���Ŀ� ������ �߻��� �� �ִµ� �������� �������� ��--> ��� ������ �߻��ߴ��� ã�� �����
	int* a = new int(0);
	pChild1 = (CChild1*)a;

	// static_Cast : ���� ĳ���� ( ������ �ܰ迡�� ��ȯ )
	// ���� int* �������� �޸𸮸� CChild*�� ���߷��� �ϸ� ������ �Ұ���
	// pChild1 = static_cast<CChild*>(a); -> ���� "�߸��� ���� ��ȯ�Դϴ�." -> CBase*�� ĳ���ý� ���������� ������ ����
	pChild1 = static_cast<CChild1*>(pBase);
	pChild1->printB();

	//float ������ CChild1�� int���� CChild2 ������ ���� ĳ������ �ؼ� �����(float , int ���� �Ѵ� 4Byte�� Ʋ�� ������) -> �Ʒ��� ���������� 1078523331�� ��� 
	CBase* pBase2 = new CChild1;
	CChild2* pChild2 = static_cast<CChild2*>(pBase2);
	pChild2->printB();

	// float�� int������ ������ �޸𸮸� �о� ����ϸ� 3.14f�� int������ ���� ���(1078523331)
	float fvalue = 3.14f;
	int* pi = (int*)&fvalue;
	printf("pi=%d", *pi);

	delete pBase;
	delete a;
	delete pBase2;
}