#include "holberton.h"

/**
 * _isalpha.c - checks if a character is an alphabet
 * @c: character being checked
 *
 * Return: returns 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
