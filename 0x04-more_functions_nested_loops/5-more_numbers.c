#include "holberton.h"

/**
 * more_numbers - prints 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(48 + (i / 10));
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
		j++;
	}
}
