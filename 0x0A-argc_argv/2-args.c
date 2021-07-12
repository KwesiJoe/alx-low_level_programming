#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int idx = 0;

	while (idx < argc)
	{
		printf("%s\n", argv[idx]);
		idx++;
	}
	return (0);
}
