#includ < stdio.h >
/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
printf("the size of a char: %d byte(s)\n", sizeof(char));
printf("the size of an int:  %d byte(s)\n", sizeof(int));
printf("the size of a long int: %d byte(s)\n", sizeof(long int));
printf("the size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("the size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
