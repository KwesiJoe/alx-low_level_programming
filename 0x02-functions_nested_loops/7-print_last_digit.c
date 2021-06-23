#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number that this function operates on.
 *
 *Return: returns the last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = (n % 10);
	}
	else
	{
		last = ((-1 * n) % 10);
	}
	_putchar(last + '0');
	return (last);
}
