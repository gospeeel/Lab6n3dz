#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int x, y; // x - часы y - минуты
	x < 12;
	scanf("%d", &x);
	printf("¬ведено число %d\n", x);
	y = x * 60;
	printf("%d час(ов) = %d минутам", x, y);
}