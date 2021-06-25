#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times \ is printed
 *
 * Returns: void
 */

void print_diagonal(int n)
{
	int i, j = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < n + 1)
		{
			for (i = 1; i <= j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
}
