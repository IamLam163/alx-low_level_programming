#include "main.h"
/**
 * rot13 - convert to rot 13
 * @str: input string
 * Return: string conversion
 */

char *rot13(char *str)
{
	int count = 0, b;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[count] != '\0')
	{
		b = 0;
		while (letters[b] != '\0')
		{
			if (str[count] == letters[b])
			{
				str[count] == rot13[b];
				break;
			}
			b++;
		}
		count++;
	}

	return (str);
}

