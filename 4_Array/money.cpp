#include "money.h"
#include <Stdio.h>

static int s_money = 0;//static 변수는 특정 파일 내에서만 사용 가능한 지역 변수(static 변수는 해당 파일 내에서만 접근 가능하며 다른 파일에서는 참조할 수 없습니다.)

extern int g_money; // 변수 만드는게 아님 , 어디선가 만들어진 g_money 변수를 참조한것.(다른 파일에 정의된 전역 변수를 참조할 때 사용)

int addMoney(int money)
{
	int t_money = 0;
	t_money += money;
	g_money += money;

	printf("t_money=%d\n", t_money);
	printf("g_money=%d\n", g_money);
	return 0;
}

int useMoney(int money)
{
	return 0;
}
