#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: A pointer to an char that will be updated
 * @src: A pointer to an char that will be updated
 * @n: will be an integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int v;

	v = 0;
	while (v < n && src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}

	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}
