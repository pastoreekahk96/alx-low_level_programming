#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %zu byties\n", sizeof(char));
	printf("size of an int: %zu bytes\n", sizeof(int));
	printf("size of a long int: %zu bytes\n", sizeof(long int));
	printf("size of long long: %zu bytes\n", sizeof(long long));
	printf("size of float: %zu bypas\n", sizeof(float));
	return (0);
}
