#include <stdio.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
