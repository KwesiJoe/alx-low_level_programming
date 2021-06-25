#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet  10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	unsigned int i;
	unsigned int j = 0;

	while (j < 10)
	{
		for (i = 97; i <= 97 + 25; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
