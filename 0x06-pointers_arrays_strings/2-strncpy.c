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
	int dest_idx = 0, src_idx = 0, i, src_size;

	/*find length of dest string*/
	while (*(dest + dest_idx) != '\0')
	{
		dest_idx++;
	}

	/*find length of src string*/
	while (*(src + src_idx) != '\0')
	{
		src_idx++;
	}
	src_size = src_idx + 1;

	if (n > src_size)
	{
		n = src_size;
	}

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
