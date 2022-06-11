#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n:  the number of times the character is printed
 *
 * Return: 0 if successful
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
