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

		for (i = 48; i < 58; i++)
		{
			putchar(i + '0');
			if(i < 57)
			{
				putchar(48);
				putchar(32);
			}
		}
	putchar('\n');
		return (0);
}
