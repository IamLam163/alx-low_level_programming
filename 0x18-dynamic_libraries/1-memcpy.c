#include "main.h"
/**
 * _memcpy -  function copies n bytes from memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of btyes
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
