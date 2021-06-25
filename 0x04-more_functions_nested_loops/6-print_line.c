#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	if (n >= 1)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
