#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: input string
 *
 */

char *cap_string(char *s)
{
	int idx = 0;
	int sep;
	int seperators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(s + idx) != '\0')
	{
		for (sep = 0; sep < 13; sep++)
		{
			if (*(s + idx) == seperators[sep])
			{
				if (*(s + idx + 1) >= 97 && *(s + idx + 1) <= 122)
				{
					*(s + idx + 1) = *(s + idx + 1) - 32;
				}
			}
		}
		idx++;
	}
	return (s);
}
