#include <stdio.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar((char) i);
	}
	putchar(10);

	return (0);
}
