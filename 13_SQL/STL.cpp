#include <stdio.h>
#include <vector>
#include <list>


struct stMonster
{
	int index = 0; // ���� Ÿ��
};

bool IsFindMonIndex(const stMonster& mon) 
{
	return mon.index == 13; // ���� mon.index�� 3�̸� true, �ƴϸ� false ��ȯ
}


class CShop
{
public:
	int isOpen = false;
};



int main()
{
	// STL ( �������� ���� �������� �迭 )
	// �迭�� �����ϸ鼭 ó������ ������ �������� �ʰ� �ʿ��� ������ �ø��� ���� �� �ִ� �迭
	/* 
	Ex) 1. ����(vector) - ����(Stack) ����
	 * �������� �޸𸮸� Ȯ���Ѵ�.
	 * �ڽ��� ��Ҹ� ������ ���� �迭(dynamic array)�� �����Ѵ�.
	 * ���� ���� �����ڸ� ����([])�ϱ� ������ ��� ���� �����ϵ� ��� �ð�(������ �ð�)�� �ҿ�ȴ�.
	 * ���� �迭�̱� ������ �迭�� �߰��� ���� �߰��ϰų� �����ϸ� ���� ���� �̵��ؾ� �ϱ� ������ �ð��� ���� �ɸ���.
	 * �߰��� �߰��ϴ� ���� ������尡 ũ�� ������ ���� �޺κп� �߰��Ѵ�( push_back )
	 * ���� �迭�̱� ������ ũ���� Ȯ��� ��Ұ� ���������� ���Ҵ� ����� ũ��.
	 * ���� 
	 - ���� ������ ����ð�(������ �ð�)�� �����ϹǷ�, �б� �ӵ��� �ſ� ������
	 * ���� 
	 - �߰��� ���� �߰�/�����ϴ� ����� ũ��
	 - ���Ҵ� ����� ũ��
	 * 
	*/
	// std:vector<int> : int���� vector �迭
	// vecint : vector �迭�� �̸�
	// { 0,1,2,3,4 } : vecint�� �ʱⰪ 
	//std::vector<int>vecint{ 0,1,2,3,4 };
	//int vectorSize = vecint.size();//������ ��� ���� ��ȯ
	//int vec0 = vecint[0];// []�� ���� ��Ȯ�� ��ġ�� �־ ���� ����
	//int* pData = vecint.data();// ���� �迭 ���� ������ �޸� ������ �ּ�(������)�� ��ȯ
	//int vCap = vecint.capacity();// ������ ũ�� ���鿡���� ���� ���� ũ�⸦ ��ȯ(�޸� ũ��)
	//printf("vecint capacity=%d", vCap);


	//for (int i = 0; i < vecint.size(); i++)
	//{
	//	printf("vecint[%d]=%d\n", i, vecint[i]);
	//}
	//for (int value : vecint) // for each , �� ���� ������� ���� �����ϸ� ���� �����ʹ� ���� �ȵ�.
	//{
	//	value = 0;
	//	printf("vecint=%d\n", value);
	//}
	//for (const int& value : vecint) // const int& -> ���� �� ���� �Ұ���(value = 0; �Ұ� )
	//{
	//	//value = 0;
	//	printf("vecint=%d\n", value);
	//}
	//for (int& value : vecint) // ���۷��� ���� ������� ���� �����ϸ� ���� ������ ���� 
	//{
	//	value = 1; 
	//	printf("vecint=%d\n", value);
	//}
	//for (const int& value : vecint) // const int& -> ���� �� ���� �Ұ���(value = 0; �Ұ� ), ���۷��� ������ const ������ �����ϸ� �� ���� �Ұ���
	//{
	//	printf("vecint=%d\n", value);
	//}

	//std::vector<int>veciint{ 0,1,2,3,4,5,6,7,8,9 };
	//std::vector<int>::iterator veciter = veciint.begin();
	//// veciter++; -> '���� �迭�� ��ġ�� ����Ű�ڴ�' ��� �ǹ�
	//veciter += 2; //-> ���������� 2�� �̵��� �迭�� ��ġ�� ����Ű�ڴ�.
	//// veciint.end();// �迭�� ���̶�� �ǹ� ( ������ �迭 x )
	//veciint.pop_back(); // �迭�� ������ ��Ҹ� �����ϰڴ�.
	//veciint.push_back(100); // �迭�� �������� '100'�̶�� ��Ҹ� �߰��Ѵ�.
	//veciint.pop_back(); // �迭�� ������ ��Ҹ� �����ϰڴ�.
	//veciint.push_back(9); // �迭�� �������� '100'�̶�� ��Ҹ� �߰��Ѵ�.
	//printf("veciter=%d\n", *veciter);
	//for (std::vector<int>::iterator iter = veciint.begin(); iter != veciint.end(); ++iter)
	//{
	//	printf("iter=%d\n", *iter);
	//}
	//
	//veciter = veciint.begin();
	//while (veciter != veciint.end())
	//{
	//	printf("While iter = %d\n", *veciter);
	//	veciter++;
	//}
	//printf("veciint size=%d\n", int(veciint.size()));

	//veciter = veciint.begin();
	//while (veciter != veciint.end())
	//{
	//	if (*veciter == 5)
	//	{
	//		veciter = veciint.erase(veciter);//veciter�� ����Ű�� �ִ� �迭 ��� ����
	//	}
	//	else
	//	{
	//		veciter++;
	//	}
	//}
	//veciter = veciint.begin();
	//while (veciter != veciint.end())
	//{
	//	printf("While iter = %d\n", *veciter);
	//	veciter++;
	//}

	/*
	Ex) 2. ����Ʈ(List)
	* ����Ʈ�� ��ҵ��� ����� ���Ḯ��Ʈ�� ���·� �����Ѵ�.(Doubly linked List)
	* ����Ʈ ��ü�� ��Ŀ�� �Ҹ��� ������ 2���� �����ϴµ� �̴� head�� tail�� ����Ų��.
	* ���ο� ��Ҹ� �����ϱ� ���ؼ��� �� ������(��Ŀ)�� �����Ѵ�.
	* ����Ʈ�� ��������([])�� �������� �ʴ´�. ( n ��° ��ҿ� �����ϱ� ���ؼ��� ������ ���ľ� �ϱ� ������ )
	* Ư�� ��ġ�� �߰�/������ �����Ӵ�. (Ư�� ��ġ�� ã�� �ð��� ����)
	* ���Ҵ� ������ ����. �������� �޸𸮰� �ƴϱ� ������(�޸𸮰� �����Ǵ� ��) ������ �߰��� �� �ִ�.
	* ����
	* - ������ ��ġ�� ��Ҹ� �߰��ϴ� ���� �����Ӵ�( Ư�� ��ġ�� ã�� �ð��� ���� ) -> ���⿡ �ſ� ������ ������ �ִ�.
	* ����
	* - ���������� �Ұ����ϱ� ������ ���� Ž���Ͽ� ��ġ�� ã�´�.
	* - ���Ұ��� ������ ���� �߰����� �޸𸮸� �Ҹ��Ѵ�( ���� ����� ������ �޸� )
	*/
	
	// std::list<int> -> ����Ʈ�� ������ ������
	// listint -> ����Ʈ �̸���
	// {0,1,2,3,4} -> ������ ����Ʈ�� �⺻��
	
	//std::list<int>listint{ 0, 1, 2, 3, 4 };

	//for (int value : listint)
	//{
	//	value = 0;
	//	printf("list value=%d\n", value);
	//}

	//for (const int& value : listint)
	//{
	//	printf("list value=%d\n", value);
	//}

	//std::list<int>::iterator listiter = listint.begin();
	//printf("listiter=%d\n", *listiter);
	//for (std::list<int>::iterator iter = listint.begin();iter != listint.end(); ++iter)
	//{
	//	printf("List Value=%d\n", *iter);
	//}

	//listiter = listint.begin();
	//while (listiter != listint.end())
	//{
	//	printf("While List Value = %d\n", *listiter);
	//	listiter++;
	//}
	

	std::list<int>listint{ 10, 7, 31, 22, 75 };
	listint.push_back(100); // ����Ʈ�� ���ʿ� �� �߰�
	listint.push_front(200); // ����Ʈ�� ���ʿ� �� �߰� ����

	listint.pop_back(); // ����Ʈ�� �� ���� �� ����
	listint.pop_front(); // ����Ʈ�� �� ���� �� ����

	// ����Ʈ���� Ư�� ���� ã��
	std::list<int>::iterator it = std::find(listint.begin(), listint.end(), 31);
	if (it != listint.end())
	{
		//ã�Ҵ�.
		printf("Find List value = %d\n", *it);
		// listint.erase(it); // ����Ʈ �ȿ� �ִ� Ư�� ���� �����ϱ�
		int value = 2023;
		// listint.insert(it, value); // Ư�� ��� ���ʿ� ���ο� ��� �����ֱ�
		// listint.emplace(it, 2024); // Ư�� ��� ���ʿ� ���ο� ��� �����ֱ�
	}
	else
	{
		//�� ã�Ҵ�.
		printf("Find List Fali!\n");
	}

	for (const int& value : listint)
	{
		printf("list value=%d\n", value);
	}

	// ����ü �迭 find_if�� Ư�� ��� ã��
	std::list<stMonster>arrMon;

	for (int i = 0; i < 5; i++)
	{
		stMonster temp;
		temp.index = i+10;
		arrMon.push_back(temp);
	}

	std::list<stMonster>::iterator moniter;
	moniter = std::find_if(arrMon.begin(), arrMon.end(), IsFindMonIndex);
	// IsFindMonIndex => [](const stMonster& mon){ return mon.index ==3; }

	if (moniter != arrMon.end())
	{
		//ã�Ҵ�.
		printf("Monster index = %d\n", moniter->index);
	}
	else
	{
		printf("Monster index Find Fali!\n");
		//��ã��
	}

	for (const stMonster& value : arrMon)
	{
		printf("Monster Value=%d\n", value.index);
	}

}