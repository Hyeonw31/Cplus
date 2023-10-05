#include <stdio.h>
#include <iostream>

// x64�� ��� Ŭ���� ũ�⸦ 8/16/24/32 ������ 8Byte �������� �Ҵ�
// RTTI ����(Run Time Type Information) : 8Byte(Class) + 4Byte(m_X) = 12Byte
// 12Byte ������ �ִ� �ּ����� ������ 16Byte
class CBase
{
public:

	// ���� �Լ� (virtual)
	// �ڽ� Ŭ�������� �Լ��� override �ؼ� �籸�� ����, �����Լ��� �Ǹ� RTTI������ ����Ű�� ������ ���� ���� (8Byte, x64����) �Ҵ�
	// RTTI �����ʹ� �ش� Ŭ������ ������ ����Ű�� ��.
	// ��Ÿ���� �������� �Ҵ��(Heap ����)
	// dynamic_cast�� Ŭ������ ũ�⸦ �����ϴ°� �ƴ϶� �߰��� �Ҵ�� RTTI �����Ϳ� Ŭ������ ������ ����
	virtual void pirntX()
	{
		printf("X=%d", m_X);
	}

	int m_X = 10;
};

// RTTI ���� : 8Byte + 8Byte + 4Byte = 20 Byte
class CChild1 : public CBase
{
public:

	void printY()
	{
		printf("Y=%d", m_Y);
	}

	int m_Y = 20;
};
class CChild2 : public CBase
{
public:

	void printZ()
	{
		printf("Z=%d", m_Z);
	}

	int m_Z = 20;
};

int main()
{
	int64_t i64 = sizeof(CBase);
	printf("CBase Size=%I64d\n", i64);
	printf("CBase Size=%I64d\n", sizeof(CChild1));// sizeof() : ��ü�� ũ�� ��ȯ ���

	int64_t* pB = (int64_t*)new CBase;
	int64_t* pC = (int64_t*)new CChild1;
	printf("pB[0]=%I64d,pB[1]=%d\n", pB[0], (int)pB[1]);
	printf("pC[0]=%I64d,pC[1]=%d, pC[2]=%d\n", pC[0], (int)pC[1],(int)pC[2]);
	// pB[0]=140702764149808,pB[1]=10 -> ��°� pB[0] = RTTI��, pB[1] = m_X
	// pC[0] = 140702764149840, pC[1] = 10, pC[2] = 20-> ��°� pC[0] = RTTI��, pC[1] = m_X, pC[2] = m_Y

	delete pB;
	delete pC;

	CBase* pBase[] = { new CChild1, new CChild2 }; // �迭�� ���¹�

	for (CBase* pTemp : pBase)
	{
		pTemp->pirntX();

		// dynamic_cast 
		// <CChild1*> : ĳ����(����ȯ)�� Ŭ���� Ÿ��
		// (pTemp) : ĳ����(����ȯ)�� ��ü
		// CChild1* pChild : ����ȯ ��� ��ȯ��(ĳ���� ������ ĳ���õ� ��ü ��ȯ, ĳ���� ���н� nullptr�� ��ȯ) 
		CChild1* pChild = dynamic_cast<CChild1*>(pTemp);
		if (pChild == nullptr)
			continue;

		pChild->printY();
	}
	for (CBase* pTemp : pBase) {
		delete pTemp;
	}

}