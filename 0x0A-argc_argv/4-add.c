#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[a]);
	}
	printf("%d\n", n);
	return (0);
}


