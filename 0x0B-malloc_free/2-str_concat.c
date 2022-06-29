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
	int i = 0, j = 0, l = 0, k = 0;
	char *strout;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	strout = (char *)malloc(l * sizeof(char) + 1);
	if (strout == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k < i)
			strout[k] = s1[k];
		if (k >= i)
		{
			strout[k] = s2[j];
			j++;
		}
		k++;
	}
	strout[k] = '\0':
		return (strout);
}
