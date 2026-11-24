#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double speed;
	speed = 300000;
	printf("빛의 속도는 %1fkm/s\n", speed);

	double distance;
	distance = 149600000;
	printf("태양과 지구와의 거리 %1fkm\n" ,distance);

	double time;
	time = distance / speed;
	printf("도달 시간은 %1f초\n", time);

	return 0;

}
