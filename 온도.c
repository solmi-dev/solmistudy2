#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double wha;
	printf("화씨온도를 입력하세요 :");
	scanf("%lf", &wha);

	double sub;
	sub = 5.0/9.0 *(wha-32);
	printf("섭씨온도는 %f 입니다.",sub);

	return 0;
}