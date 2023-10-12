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
}; // enum 변수로 카드마크 선언 ( 스페이드(4) > 다이아(3) > 하트 (2) > 클로버 (1) 순서 )

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
