#include<stdio.h>
#include<stdlib.h>
/**
 *  main -entry point
 *
 *  Description: 'the programs description'
 *
 *  Return: Alwas 0 (success)
 */

void print_alphabet_x10(void)
{
	int i, n;
	n = 0;

	while(n <10)
	{
		for(i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		n++;
		putchar('\n');
	}
}

int main(void)
{
	printf(print_alphabet_x10());
	return (void);
}
