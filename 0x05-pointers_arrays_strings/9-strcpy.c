#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 * @dest: this is the destination
 * @src: this is the source
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int u;

	for (u = 0; src[u] != '\0'; u++)
	{
		*(dest + u) = *(src + u);
	}
	*(dest + u) = '\0';

	return (dest);
}
