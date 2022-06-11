#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: prints the number of times the character is printed
 *
 * Return: 0 is successful
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar (95);
		}

		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
