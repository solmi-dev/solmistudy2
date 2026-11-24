#include <stdio.h>
int main(void)
{
	int money;
	printf("고객으로부터 받은 돈 : ");
	fflush(stdout);
	scanf("%d", &money);

	int price;
	printf("물건값 :");
	scanf("%d", &price);
	printf(" % d\n", price);

	int exchange;
	printf("거스름돈 :");
	exchange = money - price;
	printf("% d\n", exchange);

	int money5000;
	money5000 = exchange / 5000;
	printf("오천원 : \t%d\n", money5000);

	int money1000;
	money1000 = (exchange - (money5000 * 5000)) / 1000;
	printf("천원 : \t\t%d\n", money1000);

	int money500;
	money500 = (exchange - (money5000 * 5000) - (money1000 * 1000)) / 500;
	printf("오백원 : \t%d\n", money500);

	int money100;
	money100 = (exchange - (money5000 * 5000) - (money1000 * 1000) - (money500 * 500)) / 100;
	printf("백원 : \t\t%d\n", money100);

	return 0;

}