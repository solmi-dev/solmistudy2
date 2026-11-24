#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name;
	printf("영어이름 첫글자는 무엇인가요 ? ");
	scanf(" %c",&name);

	char score;
	printf("프로그래밍 학점을 물어보아도 되나요?(A부터 F)");
	scanf(" %c",&score);

	printf(" %c군의 프로그래밍 과목 성적은  %c입니다." ,name, score);

	return 0;
}