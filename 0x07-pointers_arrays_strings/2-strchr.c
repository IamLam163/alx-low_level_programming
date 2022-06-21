#include "main.h"
/**
 * _strchr - locates character in the string
 * @s: string
 * @c: character
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
