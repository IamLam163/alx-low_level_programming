#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: this is a string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
