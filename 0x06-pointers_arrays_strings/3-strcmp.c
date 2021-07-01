#include "holberton.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between strings
 */

int _strcmp(char *s1, char *s2)
{
	int idx = 0, s1_len, s2_len, counter_max, dif;

	while (*(s1 + idx) != '\0')
	{
		idx++;
	}
	s1_len = idx;
	idx = 0;

		while (*(s2 + idx) != '\0')
	{
		idx++;
	}
	s2_len = idx;
	idx = 0;

	if (s1_len > s2_len)
	{
		counter_max = s2_len;
	}
	else
	{
		counter_max = s1_len;
	}

	while (idx < counter_max)
	{
		dif = *(s1 + idx) - *(s2 + idx);
		idx++;

		if (dif != 0)
		{
			break;
		}
	}
	return (dif);
}
