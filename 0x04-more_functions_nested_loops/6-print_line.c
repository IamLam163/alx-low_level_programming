#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character is printed
 *
 * Return: 0 if successful
 */
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
