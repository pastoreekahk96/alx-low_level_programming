#include <stdio.h>
#include <unistd.h>
/**
 * main - A C program that prints a line not include print to stderr
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (1);
}
