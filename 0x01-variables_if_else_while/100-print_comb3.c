#include <stdio.h>

/**
 * main -  prints all combinations of two digits
 * Return: 0
 */
int main(void)
{
	int p, m;

	for (p = 48; p <= 56; p++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > p)
			{
				putchar(p);
				putchar(m);
				if (p != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
