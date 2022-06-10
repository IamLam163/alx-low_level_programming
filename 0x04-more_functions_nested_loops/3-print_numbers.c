#include "main.h"

/**
 * function thprints the numbers, from 0 to 9, then new line
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');

		i++;
	}

	_putchar ('\n');
}
