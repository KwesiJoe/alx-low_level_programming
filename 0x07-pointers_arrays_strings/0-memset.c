#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: returns pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}
