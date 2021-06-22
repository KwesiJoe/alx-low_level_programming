#include "holberton.h"

/**
 * main - program entry point
 *
 * Return: returns (0)
 */
int main(void)
{
	char holberton[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int i;

	for (i = 0; i < sizeof(holberton); i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
