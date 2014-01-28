#include <stdio.h>
int main()
{
	//printf("Hello, ");
	//printf("world!");
	//printf("\c");

	/* печать таблицы температур по ‘аренгейту
	и ÷ельсию дл€ fahr = 0, 20, ..., 300 */
	int fahr, celsius;
	float lower, upper, step;
	lower = 0; /* нижн€€ граница таблицы температур */
	upper = 300; /* верхн€€ граница */
	step = 20; /* шаг */
	printf("  fahr   celsius\n");
	fahr = lower;
	while (fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		printf("%5d\t%6d\n", fahr, celsius);
		fahr += step;
	}

	
}
