#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: start string
 * @src: end string
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_idx = 0, src_idx = 0, i;

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

	for (i = 0; i <= src_idx; i++)
	{
		*(dest + dest_idx +i) = *(src + i);
	}
	return (dest);
}