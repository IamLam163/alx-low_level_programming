#include "main.h"
/**
 * leet - function that codes a string into 1337
 * @str: character to be cheacked
 * Return: return string;
 */

char *leet(char *str)
{

	int count = 0, x = 0;
	char *letters = "aeotlAEOTL";
	char *nums = "4307143071";

	while (str[count] != '\0')
	{
		x = 0;

		while (letters[x] != '\0')
		{
			if (str[count] == letters[x])
				str[count] = nums[x];
			x++;
		}

		count++;
	}

	return (str);
}
