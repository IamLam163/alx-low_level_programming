#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 *
 *    Return: 0
 *
 */

int main(void)

	{
	int n = 1;

	int l = 'a';

	while (n <= 10)

	{
		putchar(n);

		n += 1;

	}

	while (l <= 'f')

	{

		putchar(l);

		l++;

	}

	putchar('\n');

	return (0);
	}