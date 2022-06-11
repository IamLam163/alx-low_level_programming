#include "main.h"
/**
 *  more_numbers - program prints numbers from 0 to 14
 *
 *  Return: nothing
 */

void more_numbers(void)
{
	int b, u;

	for (b = 0; b < 10; b++)
	{
		for (u = 0; u < 15; u++)

			if (u >= 10)
				_putchar((u / 10) + 48);

			_putchar((u % 10) + 48);
		_putchar('\n');

	}
}
