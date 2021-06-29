#include "holberton.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int idx = 0;

	while (*(str + idx) != '\0')
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
