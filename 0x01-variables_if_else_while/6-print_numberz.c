#include <stdio.h>

#include <ctype.h>

/**
 * main - program that prints single digit numbers
 *
 *     Return: 0
 */

int main(void)

	{
	int n = 21;

	while (n <= 26)

	{
		putchar(n);
		n += 1;
	}
	puts("\n");

	return (0);
	}
