#include <stdio.h>

#include <ctype.h>

/**
 * main - program that prints single digit numbers
 *
 *     Return: 0
 */

int main(void)

	{
	int n = 0;

	while (n <= 10)

	{
		putchar(n);
		n += 1;
	}
	puts("\n");

	return (0);
	}
