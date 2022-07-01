#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *ar;
	int a, b = 0;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));

	if (ar == NULL)
		return (NULL);

	for (a = min; a <= max; a++)
	{
		ar[b] = a;
		b++;
	}

	return (ar);
}
