#include "main.h"
/**
* print_alphabet_x10 - print alphabets 10 times
*
* Description: prints 10 times the alphabet in lowercase followed by a new line
* Return: void
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
