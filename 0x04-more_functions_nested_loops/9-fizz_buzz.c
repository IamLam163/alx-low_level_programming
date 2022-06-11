#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	int n = 100;
	int a;

	a = 1;
	while (a <= n)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
	else if (a % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (a % 5 == 0)
	{
		if (a < n)

			printf("Buzz ");
		else

			printf("Buzz");
	}
	else
	{
		printf("%i ", a);
	}
	a++;
	}

	printf("\n");

return (0);
}
