#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int idx = 1, result = 0;

	while (idx < argc && isdigit(argv[idx]))
		{
			result += atoi(argv[idx]);
			idx++;
		}	
	printf ("%d\n", result);
	return (0);
}
