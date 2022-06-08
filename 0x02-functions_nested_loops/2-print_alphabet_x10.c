nclude "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: 0 if successful
 */
void print_alphabet_x10(void)
{
	int u, v;

	for (u = 0; u <= 9; u++)
	{
		for (v = 97; v <= 122; v++)
		{
			_putchar(v);
		}
	_putchar('\n');
	}
}
