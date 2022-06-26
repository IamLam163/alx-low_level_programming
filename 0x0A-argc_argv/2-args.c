#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
		printf("%s\n", argv[b]);
	return (0);
}
