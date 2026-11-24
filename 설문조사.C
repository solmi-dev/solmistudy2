#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{

	int x;
	float y;
	char z;

	printf("당신의 나이는 몇 살입니까? ");
	scanf("%d", &x);
	printf("당신의 키는 몇 cm 입니까? ");
	scanf("%f", &y);
	printf("당신의 성별은 무엇인가요(M또는 F)?");
	scanf(" %c", &z);


	printf("\n입력된 학생정보:\n");
	printf("나이 : %d\n", x);
	printf("키 : %.2f\n", y);
	printf("성별 : %c\n", z);

}