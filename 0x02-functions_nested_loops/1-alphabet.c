#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by new line
 *
 * Return: 0 if successful
 *
 */
void print_alphabet(void)
{
	int d;

	for (d = 97; d <= 122; d++)
	{
		_putchar(d);
	}

	_putchar('\n');
}
