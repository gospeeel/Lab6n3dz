#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int x, y; // x - ���� y - ������
	x < 12;
	scanf("%d", &x);
	printf("������� ����� %d\n", x);
	y = x * 60;
	printf("%d ���(��) = %d �������", x, y);
}