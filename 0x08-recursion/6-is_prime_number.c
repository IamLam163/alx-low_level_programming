#include "main.h"

int check_func(int, int);
/**
 * is_prime_number - returns a prime integer
 * @n: integer
 * Return: prime number
 */

int is_prime_number(int n)
{
	return (check_func(n, 1));
}

/**
 * check_func - checks the prime numbers
 * @n: integer
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if n is not a prime number
 */

int check_func(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

return (check_func(n, i + 1));
}
