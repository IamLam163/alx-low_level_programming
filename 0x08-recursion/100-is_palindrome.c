#include "main.h"
/**
 *  _strlen_R - returns the length of a string
 *  @s: string
 *  Return: length of a string
 */

int _strlen_R(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_R(s + 1));
}

/**
 * compare_char - function compares each character of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: 0
 */

int compare_char(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare_char(s, n1 + 1, n2 - 1));
	}
	return (0);
}


/**
 * is_palindrom - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrom, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_char(s, 0, _strlen_R(s) - 1));
}
