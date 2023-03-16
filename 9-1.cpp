#include <stdio.h>
#include <cmath>

int main()
{
	int N = 699; // Задаем исходную секунду
	int s = (N % 60); // Вычисляем остаток от целочисленного деления на 60.
	printf_s("%i", s); // Выводим результат на экран
	return 0;
}
