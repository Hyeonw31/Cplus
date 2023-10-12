#include <stdio.h>
#include <vector>
#include <string>
#include "Card.h"
#include <random>

/*
1. 52���� ī������ ������ �մϴ�.
2. 52���� ī�带 �������� �����ϴ�.
3. ������ ���۵Ǹ� ī�� �ϳ��� ���� �մϴ�.
4. �÷��̾�� ����ī�尡 ���µ� ī�庸�� ���� ī������ ���� ī�������� ���� ������ �մϴ�.
5. ���� ī�带 �����ϰ� ������ �������� ���� ������ ������ �¸� Ʋ���� �й�
6. ī�带 1�� ���� ���� K�� ���� �����ϴ�.
7. ������ �����̵� > ���̾� > ��Ʈ > Ŭ�ι� ������ �����ϴ�.
*/

void Shuffle(std::vector<CCard>& Cards)
{
	std::random_device rd;
	// 1234�� �õ�(seed)���̶�� �ؼ� �ʱ⿡ �־����� Ű��
	// ���� �õ���� ���� ���ڰ� ���ϰ� ���´�.
	// std::mt19937 mt(1234); 
	std::mt19937 mt(rd.entropy());// �õ� ���� �������� �ο��ؼ� ���� ���� ����� ������ �ʴ´�.
	std::uniform_int_distribution<int> dist(0, Cards.size() - 1); // 0 ~ Card.size() -1 ��ŭ�� ���� ����


	for (int i = 0; i < 100; i++)
	{
		int firstIndex = dist(mt);
		int secondIndex = dist(mt);

		CCard temp = Cards[firstIndex];
		Cards[firstIndex] = Cards[secondIndex];
		Cards[secondIndex] = temp;
	}
}
bool CompareCard(const CCard& CardA, const CCard& CardB)
{

	if (CardA.m_number > CardB.m_number)
	{
		return true;
	}
	else if (CardA.m_number < CardB.m_number)
	{
		return false;
	}
	else if (CardA.m_number == CardB.m_number)
	{
		if (CardA.m_mark > CardB.m_mark)
		{
			return true;
		}
		else if (CardA.m_mark < CardB.m_mark)
		{
			return false;
		}
	}
}

int main()
{
	std::vector<CCard> Cards; // Class CCard�� ���� ���� Cards ����

	for (int i = CardMark::Clover; i <= CardMark::Spade; ++i) // i = CardMark(Ŭ�ι����� ����~Spade����) i++
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		for (int j = 1; j <= 13; ++j)
		{
			CCard card; // Class CCard������ card �Լ� ����
			card.m_mark = (CardMark)i; // card�� m_mark�� i ����
			card.m_number = j; // m_number�� j ����
			Cards.push_back(card); // vector Cards �ڿ� card��� ����
		}
	}

	Shuffle(Cards);

	bool bRun = true;
	int i = 0;
	while (bRun)
	{
		Shuffle(Cards); // ī�� ����
		Shuffle(Cards);
		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str()); // ù��° ī�尪 ��� Cards[0]�� ���� GetCardStr()�� ���·� ��� 
		int input = 0;//input = 1 �̸� Cards[0] ����.
		printf("�ι�° ī�尡 ������ 0, ������ 1�� �Է����ּ��� : ");
		scanf_s("%d", &input); // �ι�° ī�尡 ������ �������� ���� ����
		system("cls");


		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str());
		printf("�ι�° ī��� %s �Դϴ�.\n", Cards[i + 1].GetCardStr().c_str());

		// IsFirstHigh = 1 �̸� Cards[0] ����.
		bool IsFirstHigh = CompareCard(Cards[i], Cards[i + 1]); // CompareCard�� �Լ� ����� True�� 1. False�� 0 ���

		if (IsFirstHigh == input) // CompareCard �Լ� ��� ���� �Է��� input���� ��ġ or ����ġ�� ���� �Ʒ� ����� ���
		{
			printf("�����.\n");
		}
		else
		{
			printf("Ʋ�ȴ�.\n");
		}
	


		i += 2;
	}

	/*for (CCard& card : Cards)
	{
		card.printCard();
	}*/


}