#include "main.h"

/**
 * _isupper function  that checks for uppercase character
 *
 * @c: to print int
 *
 * Return (0): if successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
