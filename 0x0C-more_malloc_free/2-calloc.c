#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int b;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
		return (NULL);

	for (b = 0; b < (size * nmemb); b++)
		ar[b] = 0;

	return (ar);
}

