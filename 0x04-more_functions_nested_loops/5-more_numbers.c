#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14 followed by a new line ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
/*	int j = 0;*/
	
	while (i < 10)
	{
		while (j < 14)
		{
			_putchar(48 + i);
			_putchar();
		}
		_putchar('\n')
		i++;
	}
}