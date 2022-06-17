#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: return nothing
 */

void reverse_array(int *a, int n)
{
	int *start_o, *end_o, o;
	int p;

	start_o = a;
	end_o = a;

	for (p = 0; p < n - 1; p++)
	{
		end_o++;
	}

	for (p = 0; p < n / 2; p++)
	{
		o = *end_o;
		*end_o = *start_o;
		*start_o = o;

		start_o++;
		end_o--;
	}
}
