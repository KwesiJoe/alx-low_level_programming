#include "holberton.h"

/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes of src to use.
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		*(dest + idx) = *(src + idx);
	}
	
	for ( ; idx < n; idx++)
	{
		dest[idx] = '\0';
	}
	return (dest);
}
