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
	unsigned int idx = 0;

	while (idx < n)
	{
		*(s + idx) = b;
		idx++;
	}

	return (s);
}
