#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - functions returns a pointer to 2d array
 * @width: width
 * @height: height
 * Return: NULL on failure, NULL if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}
	return (ar);
}
