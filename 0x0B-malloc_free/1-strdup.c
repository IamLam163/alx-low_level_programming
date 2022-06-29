#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to allocated space
 * in memory
 * @str: String
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int a = 0;
	unsigned int b = 0;

	if (str == NULL)
		return (NULL);

	while (str[a])
		a++;
	ar = malloc(sizeof(char) * (a + 1));

	if (ar == NULL)
		return (NULL);

	while (str[b])
	{
		ar[b] = str[b];
		b++;
	}

	ar[b + 1] = 0;
	return (ar);
}
