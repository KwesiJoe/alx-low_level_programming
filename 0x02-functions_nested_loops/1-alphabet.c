#include "holberton.h"

/**
 * print_alphabet - prints the alphabets
 * 
 * Return: returns null
 */
void print_alphabet(void)
{
	unsigned int i;

	for (i = 97; i <= 97 + 25; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
