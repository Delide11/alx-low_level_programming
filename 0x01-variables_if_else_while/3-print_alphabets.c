#include<stdio.h>
/*all header files goes here*/
/**
 * main - entry point
 * Description: 'the program's description'
 * Return: Always (0) Success*
*/

int main(void)
{
	char i;
	char y;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
		putchar('\n');
		return (0);
}
