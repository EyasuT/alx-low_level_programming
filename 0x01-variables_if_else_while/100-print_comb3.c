#include <stdio.h>
/**
 * main - prints different combination of two digit
 * Return: Always 0
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch  <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10); /* this is an ASCII code*/
	return (0);
}
