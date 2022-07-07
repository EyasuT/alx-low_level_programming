#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void positive_or_negative(int i)
{
	int n;

	strand(time(0));
	n = i;
	if (n > 0)
		print("%d is positive\n", n);
			if (n == 0)
				print("%d is zero\n", n);
			if (n < 0)
			{
				print("%d is negative\n", n);
			}
			return (0);
}
/*
 * main - debuging example
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
