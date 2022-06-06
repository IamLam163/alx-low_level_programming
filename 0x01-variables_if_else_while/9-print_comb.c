#include <stdio.h>

/**
 * main - program prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 48; l < 58; l++)
	{
		putchar(l);
		if (l != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('l');
return (0);
}
