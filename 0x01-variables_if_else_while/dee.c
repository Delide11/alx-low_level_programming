#include<stdio.h>
/*all header files goes here*/
/**
 * main - entry point
 * Description: 'the program's description'
 * Return: Always (0) Success*
*/

int main(void)
{
	char i = 'a';
	

	while ((i <= 'z') && (i != 'q' || i != 'e'))
	{
		putchar(i);
		i++;
	}
		putchar('\n');
		return (0);
}
