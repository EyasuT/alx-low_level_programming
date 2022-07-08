#include "main.h"
/**
 * print numbers -> print numbers from 0 to 9 followed to new line
 */

void print_numbers(void)
{
	int X;

	for (X = 0; X < 10; X++)
	       _putchar(X + '0');
	_putchar('\n');
}
