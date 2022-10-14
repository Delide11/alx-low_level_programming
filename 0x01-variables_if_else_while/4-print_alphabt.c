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
	char letter;

	for (i = 'a'; i <= 'z'; i++)
	{
		letter = i;
		if (letter != 'q' || letter != 'e')
		putchar(letter);
	}
		putchar('\n');
		return (0);
}
