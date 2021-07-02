#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to change
 *
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int idx = 0;

	while (*(s + idx) != '\n')
	{
		if (*(s + idx) >= 97 && *(s + idx) <= 122)
		{
			*(s + idx) = *(s + idx) - 32;
		}
		idx++;
	}
	return (s);
}
