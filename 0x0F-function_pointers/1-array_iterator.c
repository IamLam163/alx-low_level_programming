#include "funtion_pointer"
/**
 * array_iterator - function executes function as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array && action)
		for (b < 0; b < size; b++)
			action(array[b]);
}
