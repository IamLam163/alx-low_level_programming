#include "main.h"
/**
 * print_to_98 - function that prints the 9 times table, starting with 0
 *
 * @n print n on a new line
 *
 *
 * Return: nothing
 */
void times_tables(void)
{
	int x, y, k;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			k = x * y;
			if (y == 0)
				_putchar (k + '0');
			if (y != 0 && k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('k');
				_putchar(k / 10) + '0';
				_putchar(k % 10) + '0';
			}

		}
		_putchar('\n');
	}
}
