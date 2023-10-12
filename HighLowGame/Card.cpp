#include "Card.h"
#include <stdio.h>
#include <string>
#include <iostream>


CCard::CCard(CardMark mark, int number) :m_mark(mark), m_number(number)
{

}

std::string CCard::GetMarkStr()
{
	switch (m_mark) // m_mark형태에 따라 리턴값 반환
	{
	case Clover:
		return "Clover";
		break;
	case Heart:
		return "Heart";
		break;
	case Dia:
		return "Dia";
		break;
	case Spade:
		return "Spade";
		break;
	}

	return "None";
}

std::string CCard::GetCardStr()
{

	return GetMarkStr() + "[" + std::to_string(m_number) + "]"; // m_mark 형태 + [ + m_number(to_string) + ] -> 문자열
}
void CCard::printCard()
{
	printf("%s[%d]\n",GetMarkStr().c_str(), m_number); // %s -> GetMarkStr , %d -> m_number
}
