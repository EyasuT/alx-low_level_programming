#include <stdio.h>
/**
 *  main - print alphabet in lower and upper case
 *  Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a';  ch <= 'z'; ch++)

	{
		putchar (ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n'); /* this is an ASCII code for new line*/
	return (0);
}
