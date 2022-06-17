#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: input string
 * Return: char
 */

char *cap_string(char *s)
{
	int count = 0, a;
	int sep_words[] = {32, 9, ',', ';', '.', '!', '!', '?', '"', '(', ')', '{', '}'};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;

	while (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;

	while (*(s + count) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + count) == sep_words[a])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}

	return (s);
}
