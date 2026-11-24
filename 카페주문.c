#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int price;
	printf("커피한잔의 가격은?");
	scanf("%d", &price);

	int cup;
	printf("몇 잔 주문하시겠습니까?");
	scanf("%d", &cup);

	float discount;
	printf("할인율은 몇 퍼센트 입니까?");
	scanf("%f", &discount);


	printf("%d원짜리 커피를 %d잔 주문하셨습니다\n%.2f%% 할인받을 수 있습니다.", price, cup, discount);

}
