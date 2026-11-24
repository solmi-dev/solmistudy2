#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int korean;
	int english;
	int math;

	printf("국어점수:");
	scanf("%d", &korean);
	printf("영어점수:");
	scanf("%d", &english); 
	printf("수학점수:");
	scanf("%d", &math);

	int sum = korean + english + math;
	float average =sum/3.0;
	
	printf("[학생 성적표]\n");
	printf("국어:%d점\n", korean);
	printf("영어:%d점\n", english);
	printf("수학:%d점\n", math);
	printf("총점:%d점\n", sum);
	printf("평균:%.2f점\n", average);

		return 0;
}