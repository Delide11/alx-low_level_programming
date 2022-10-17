#include<stdio.h>
/*all header files goes here*/
/**
 * main - entry point
 * Description: 'the program's description'
 * Return: Always (0) Success*
*/

int main(void)
{
	int i;
	char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',};

		for (i = 0; i < 10; i++)
		{
			putchar(digits[i]);
		}
	putchar('\n');
		return (0);
}
