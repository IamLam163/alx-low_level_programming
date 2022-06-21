#include "main.h"
/**
 * print_chessboard - function prints chessboard
 * @a: input
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c;

	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			if (c == 7)
				_putchar('\n');
			c++;
		}
		b++;
	}
}
