#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function prints the sum of diagonals
 * @: input
 * @size: size of matrix
 * Return: return nothing
 */

void print_diagsums(int *a, int size)
{
	int d, sum1 = 0, sum2 = 0;

	for (d = 0; d < (size * size); d++)
	{
		if (d % (size + 1) == 0)
			sum1 += *(a + d);
		if (d % (size - 1) == 0 && d != 0 && d < size * size - 1)
			sum2 += *(a + d);
	}
	printf("%d, %d\n", sum1, sum2);
}
