#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: this will be printed in reverse
 */

void print_rev(char *s)
{
	int b, n;

	n = 0;
	while (s[n] != '\0')
		n++;
			for (b = n - 1; b >= 0; b--)
			{
				_putchar(s[b]);
			}
	_putchar('\n');
}
