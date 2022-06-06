#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 *
 *    Return: 0
 *
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
return (0);
}
