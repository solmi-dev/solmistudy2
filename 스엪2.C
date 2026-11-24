#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int z;
	int sum;
	int average;

	printf("정수를입력하시오: ");
	scanf("%d", &x);
	printf("정수를입력하시오 : ");
	scanf("%d", &y);
	printf("정수를입력하시오: ");
	scanf("%d", &z);

	sum = x + y + z;
	average = sum/ 3.0;
	printf("평균값은 %d입니다.\n" ,average);

	return 0;
}