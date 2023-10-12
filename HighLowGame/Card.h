#pragma once

#include <string>
enum CardMark
{
	None = 0,
	Clover,
	Heart,
	Dia,
	Spade,
	MaxMark
}; // enum ������ ī�帶ũ ���� ( �����̵�(4) > ���̾�(3) > ��Ʈ (2) > Ŭ�ι� (1) ���� )

class CCard
{
public:
	CCard(CardMark mark = CardMark::None, int number = 0);

	std::string GetMarkStr();

	std::string GetCardStr();


	void printCard();


public:
	CardMark m_mark;
	int m_number;
};
