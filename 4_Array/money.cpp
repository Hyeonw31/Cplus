#include "money.h"
#include <Stdio.h>

static int s_money = 0;//static ������ Ư�� ���� �������� ��� ������ ���� ����(static ������ �ش� ���� �������� ���� �����ϸ� �ٸ� ���Ͽ����� ������ �� �����ϴ�.)

extern int g_money; // ���� ����°� �ƴ� , ��𼱰� ������� g_money ������ �����Ѱ�.(�ٸ� ���Ͽ� ���ǵ� ���� ������ ������ �� ���)

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
