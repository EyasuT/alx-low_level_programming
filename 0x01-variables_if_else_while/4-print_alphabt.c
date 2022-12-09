#include <stdio.h>
/**
* main : Prints the alphabet in lowercase
* followed by a new line, except q and e
* Return: always 0 (sucess)
*/
int main(void)
{
	char (ch);
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar (ch);
		}
	}
	putchar (10);
	return (0);
}
