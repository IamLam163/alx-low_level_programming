#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int a, b, c, control;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	strout = malloc(sizeof(char) * (a + b + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		strout[c] = s1[c];

	control = b;
	for (b = 0; b <= control; c++)
		strout[c] = s2[c];

	return (strout);
}
