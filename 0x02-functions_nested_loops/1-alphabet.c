#include<stdio.h>
#include<stdlib.h>
/**
 *  main -entry point
 *
 *  Description: 'the programs description'
 *
 *  Return: Alwas 0 (success)
 */

void print_alphabet(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
