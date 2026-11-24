#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double height = 179.5;
	double bwt = 75.0;

	if (height > 187.5 && bwt < 80.0)
	{
		printf("ok\n");
	}
	else
	{
		printf("cancel\n");
	}

	return  0;
}