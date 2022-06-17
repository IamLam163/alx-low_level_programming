#include "main.h"
/**
 * string_toupper - function changes all lowercase letters of a string
 * @str: this is a string
 * Return: return a char
 */

char *string_toupper(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (str[b] >= 'a' && str[b] <= 'z')
		{
			str[b] = str[b] - 32;
		}

	}

	return (str);
}
