#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 *
 * @size: the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int u, v;

	for (u = 0; u < size; u++)
	{
		for (v = 1; v < (size - u); u++)
			_putchar(' ');
		for (v--; v < size; v++)
			_putchar(35);
		if (u < (size - 1))
			_putchar('\n');
	}
	-putchar('\n');
}
