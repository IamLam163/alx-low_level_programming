#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return 0; if successful
 *
 */

void print_alphabet(void)
{
	int b;

	b = 'a';

	while ('b' <= 'z')
	{
		_putchar(b);

		b++;
	}
	_putchar('\n');
}
