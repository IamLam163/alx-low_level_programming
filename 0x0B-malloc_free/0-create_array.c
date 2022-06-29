#include "main.h"
#include <stdlib.h>
/**
 * Create array - function creates an array of characters
 * @size: size of array
 * @c: stored char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		str[a] = c;
		a++;
	}
	return (str);
}

