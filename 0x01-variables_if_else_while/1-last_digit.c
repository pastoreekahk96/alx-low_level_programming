#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d and %d is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d and %d is zero" n, m);
	else (m < 6 && m != 0)
		printf("Last digit of %d and %d is less than 6 and not 0" n, m);

	printf("\n");

	return (0);
}