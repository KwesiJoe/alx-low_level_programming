#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int size = 0, run, idx;

	while ((str[size] != '\0'))
	{
		size++;
	}

	run = size / 2;
	idx = run;
	
	if (size % 2 != 0)
	{
		idx = run + 1;
	}

	while (idx <= size)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
