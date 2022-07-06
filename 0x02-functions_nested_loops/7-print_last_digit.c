#include "main.h"
/**
 * print _last_digit -> print the last digit
 * @n: the passed args
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int X;

	if (n < 0)

		n = -n;
	X = n % 10;
	_putchar(X + '0');
	_puchar('\n');
	return (X);
}
