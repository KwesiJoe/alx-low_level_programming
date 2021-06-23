#include "holberton.h"

/**
 * _islower - checks character case
 * @c: The character to be checked
 *
 * Return: returns 1 if character is lowercase, returns 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
