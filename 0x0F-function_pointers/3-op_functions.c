#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - function returns the subtraction of a and b
 * @a: first integer
 * @b: second integer
 * Return: subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divides two integers
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - function returns the remainder of division
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
