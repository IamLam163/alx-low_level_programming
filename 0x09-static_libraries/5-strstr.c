#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * @needle: needle
 * @haystack: the entire string
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *chaystack;
	char *mneedle;

	while (*haystack != '\0')
	{
		chaystack = haystack;
		mneedle = needle;

		while (*haystack != '\0' && *mneedle != '\0' && *haystack == *mneedle)
		{
			haystack++;
			mneedle++;
		}
		if (!*mneedle)
			return (chaystack);
		haystack = chaystack + 1;
	}
	return (0);
}
