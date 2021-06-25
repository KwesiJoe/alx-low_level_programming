#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times \ is printed
 *
 * Returns: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n-1))
			_putchar('\n');
	}
	_putchar('\n');
}
