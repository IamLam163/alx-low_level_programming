#include "main.h"
/**
 * _pow_recursion - return x raised to y
 * @x: x power of y
 * @y: the power of
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
