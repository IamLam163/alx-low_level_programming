#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int string = 0, a, b;
	char *str, temp;

	while (string >= 0)
	{
		if (s[string] == '\0')
			break;
		string++;
	}
	str = s;

	for (a = 0; a < (string - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = temp;
		}
	}
}
