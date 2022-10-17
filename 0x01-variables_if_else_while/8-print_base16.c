#include<stdio.h>
/*all header files goes here*/
/**
 * main - entry point
 * Description: 'the program's description'
 * Return: Always (0) Success*
*/

int main(void)
{
	char y;
	int i;
	char digits[] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	for (i = 0; i < 10; i++)
	{
		putchar(digits[i]);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
		putchar('\n');
		return (0);
}
