#include "main.h"
/**
 * print_number - function prints number
 * @n: inpu int
 */

void print_number(int n)
{
	int count = 0, p = 1;
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -n;
	}

	while (n != 0)
	{
		n /= 10;
		count++;
	}
	while (count > 1)
	{
		p *= 10;
		count--;
	}
	while (p >= 1)
	{
		_putchar(num / p % 10 + '0');
		p /= 10;
	}
}
