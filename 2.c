#include <stdio.h>
#include <locale.h>

int main()
{
	int N = 8, K = 53;
	setlocale(LC_ALL, "RUS");
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N*60+K);
	printf("До полуночи осталось %d часов и %d минут\n", 23-N, 60-K);
	printf("С 8:00 прошло %d секунд\n", K*60);
	printf("Текущий час = %f и текущая минута = %f часа\n", N/24., K/60.);

	int n = 4;
	printf("Результат деления %d на 333 равен %5.3f\n", n, n/333.);
	printf("Дано: \n %10d \n %10d \n %10s\n", n, 333, "_______");
	printf("Ответ:\n %+10.3f", n/333.);
}