#include "function_pointers.h"
/**
 * print_name - a function that prints name
 * @name: name of function
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
