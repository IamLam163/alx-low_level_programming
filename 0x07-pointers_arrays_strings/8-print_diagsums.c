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
	int sum1 = 0, sum2 = 0;
	int i = 0;
	int j = size - 1;

	while (i <= (size * size))
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}
	while (j < (size * size - 1))
	{
		sum2 += a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
