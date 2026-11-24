#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int bwt;
	double height;

	printf("몸무게(Kg)와 키(cm) 입력 :");
	scanf("%d %lf", &bwt, &height);

	double bmi;
	height = height / 100.0;
	bmi = bwt / (height * height);
	printf("BMI = %f\n", bmi);
	if (20 <= bmi && bmi <= 25)
	{
		printf("표준입니다.");
	}
	else if (bmi > 25)
	{
		printf("체중관리가 필요합니다.");
	}
	else
	{
		printf("BMI가 20 미만입니다.");
	}
	return 0;
}
