#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes to copy
 *
 * Return: returns memory destination, dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		*(src + idx) = *(dest + idx);
	}
	return (dest);
}