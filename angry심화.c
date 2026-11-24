#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{

	double locationx;
	double locationy;
	double firstlocx;
	double firstlocy;
	double firstspeedx;
	double firstspeedy;
	const double gravity = 9.8;



	printf("초기위치x,y를 입력하세요:");
	scanf("%lf,%lf", &firstlocx, &firstlocy);

	printf("초기속도x,y를 입력하세요:");
    scanf("%lf,%lf", &firstspeedx, &firstspeedy);

	printf("1초후의 위치=");
	locationx = firstlocx + firstspeedx * 1;
	locationy = (firstlocy + firstspeedy * 1 - 0.5 * gravity * 1 * 1);
	printf("%f,%f\n", locationx, locationy);

	printf("2초후의 위치=");
	locationx = firstlocx + firstspeedx * 2;
	locationy = (firstlocy + firstspeedy * 2 - 0.5 * gravity * 2 * 2);
	printf("%f,%f\n", locationx, locationy);


	printf("3초후의 위치=");
	locationx = firstlocx + firstspeedx * 3;
	locationy = (firstlocy + firstspeedy * 3 - 0.5 * gravity * 3 * 3);
	printf("%f,%f\n", locationx, locationy);

	return 0;

}