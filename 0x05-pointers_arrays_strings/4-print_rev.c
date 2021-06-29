#include "holberton.h"

/**
 * print_rev - a function that prints a string, followed by a new line, to
 * stdout.
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	count = count - 1;

	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');

}
