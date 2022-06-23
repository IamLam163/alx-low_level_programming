#include "main.h"
/**
 * _sqrt_recursion - natural square root of numbers
 * @n: the square root
 * Return: sqaure root of the number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_func(n, 1));
}


/**
 *  sqrt_func - finds the square root
 *  @a: first number
 *  @b: second number to test square root of @a
 *  Return: the square root
 */

int sqrt_func(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (sqrt_func(a, b + 1));
	return (1);
}
