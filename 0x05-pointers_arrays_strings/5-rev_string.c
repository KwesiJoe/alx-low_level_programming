#include "holberton.h"

/**
 * rev_string - a function that prints a string, followed by a new line, to
 * stdout.
 * @s: input string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int run, len_s, count = 0;
	char temp;

	while (*(s + count) != '\0')
	{
		count++;
	}
/*swap items in memory locations and run half the time*/
	count = count - 1;
	run = count / 2;
	len_s = 0;

	while (run >= 0)
	{
		temp = *(s + count);
		*(s + count) = *(s + len_s);
		*(s + len_s) = temp;
		count--;
		len_s++;
		run--;
	}
}
