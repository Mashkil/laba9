#include <stdio.h>

int main()
{
	int K = 230; // Задаем день
	while (K >= 6) // До тех пор, пока значение больше 7, вычитаем по одной неделе.
		K -= 6;
	printf_s("%i", K);
	return 0;
}
