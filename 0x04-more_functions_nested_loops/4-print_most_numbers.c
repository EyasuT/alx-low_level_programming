#include "main.h"

/**
 * print_most_numbers - this prints most numbers
 */

void print_most_numbers(void)
{
	int X;

	for (X = 0; X < 10; X++)
	{
		if (X != 0 && X != 4)
			_putchar('0' + X);
	}
	_putchar('\n');
}
