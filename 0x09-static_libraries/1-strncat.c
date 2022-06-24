#include "main.h"
/**
 * _strncat - function concatenates two strings
 * @dest: a pointerto a char
 * @src: a pointer to a char
 * @n: integer
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
