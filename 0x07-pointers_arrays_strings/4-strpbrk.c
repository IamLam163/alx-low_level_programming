#include "main.h"
/**
 * _strpbrk - function locates first occurence of a string
 * @s: first string
 * @accept: accepts
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(accept + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s);
		}
	}

	return ('\0');
}
