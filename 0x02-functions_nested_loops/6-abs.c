#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number that will be made absolute
 *
 * Return: returns the absolute value of the input
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
