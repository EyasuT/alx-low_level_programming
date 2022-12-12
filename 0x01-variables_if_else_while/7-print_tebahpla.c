#include <stdio.h>
/**
 *  main - print the alphabet in reverse
 *  Return: Always 0
 */
int main(void)
{
	int le;

	for ('z'; le >= 'a'; le--)
	putchar(le);

	putchar('\n');
	return (0);
}
