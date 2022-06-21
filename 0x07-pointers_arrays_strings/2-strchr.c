#include "main.h"
/**
 * _strchr - locates character in the string
 * @s: string
 * @c: character
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (c == s[j])
			s += j;
			return (s);
	}
	return ('\0');
}
