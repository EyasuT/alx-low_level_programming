#include <stdio.h>
/**
 * main - prints combinations of two two-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 57 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar (10); /*this is an ASCII code*/
	return (0);
}
