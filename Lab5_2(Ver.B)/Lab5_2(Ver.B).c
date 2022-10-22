// Lab5_2(Var.B).c: Пошук максимального значення та суми значень між двома додатними числами в одномiрному масивi
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	setlocale(LC_CTYPE, "ukr");
	unsigned int i, k, A, B;
	int a[10], s, m;
	const int Low = -100, High = 100, N = 10;
	srand(time(0));
	for (i = 0; i <= (N - 1); i++)
	{
		a[i] = Low + rand() % (High - Low + 1);
	}
	s = 0; m = a[0]; k = 0;
	for (i = 0; i <= (N - 1); i++)
	{
		if (i < N - 1) m = max(m, a[i + 1]);
		if (a[i] > 0) k++;
		if (a[i] > 0 && k == 1) A = i + 1;
		if (a[i] > 0 && k == 2) B = i - 1;
	}
	for (i = A; i <= B; i++) s += a[i];
	printf("\n Вектор A[1,%d] = {", N);
	i = 0;
	while (i <= N - 1)
	{
		printf("%d, ", a[i]); i++;
	}
	printf("\b\b}");
	printf("\n Максимальне значення в масивi МАХ=%d", m);
	printf("\n Сума елементiв масива мiж першим та другим додатними елементами S=%d", s);

	int getch(); getch();
	return 0;
}