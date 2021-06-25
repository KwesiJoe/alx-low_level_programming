#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 1;
	int j = 0;

	if (n >= 1)
	{
		while (i <= n)
		{
			_putchar(92);
			_putchar('\n');
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			i++;
		}
		
	}
	else
	{
		_putchar('\n');
	}
}
