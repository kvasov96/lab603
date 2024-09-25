#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int N;
	puts("Введите N < 1000: ");
	scanf("%i", &N);
	system("pause");
	int N1 = N % 10;
	int N10 = N % 100;
	int C10 = (N10 - N1) / 10;
	int C100 = (N - N10) / 100;
	int M = C100 * C10 * N1;
	if (M - M % 100 == 0)
		puts("Не трёхзначное");
	else
		puts("Трёхзначное");
	return 777;
}