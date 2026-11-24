#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	
	double locationx;
	double locationy;
	const double firstlocx = 0;
	const double firstlocy = 0;
	const double firstspeedx = 20;
	const double firstspeedy = 20;
	const double gravity = 9.8;

	locationx = firstlocx + firstspeedx * 1;
	locationy = (firstlocy + firstspeedy * 1 - 0.5 * gravity * 1 * 1);
	printf("1초후의 위치=");
	printf("%f,%f\n" ,locationx, locationy);

	locationx = firstlocx + firstspeedx * 2;
	locationy = (firstlocy + firstspeedy * 2 - 0.5 * gravity * 2 * 2);
	printf("2초후의 위치=");
	printf("%f,%f\n" ,locationx, locationy);

	locationx = firstlocx + firstspeedx * 3;
	locationy = (firstlocy + firstspeedy * 3 - 0.5 * gravity * 3 * 3);
	printf("3초후의 위치=");
	printf("%f,%f\n" ,locationx, locationy);
	
	return 0;

}