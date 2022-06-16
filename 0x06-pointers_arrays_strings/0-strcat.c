#include "main.h"

/**
 * main - function that concatenates two strings
 * @src: this is the source
 * @dest: is where the string will be joined
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int begin = 0;
	int e = 0;

	while (dest[begin])
		begin++;

	for (e = 0; src[e] != '\0'; e++)
	{
		dest[begin] = src[e];
		begin += 1;
	}

	dest[begin] = '\0';
	return (dest);

}
