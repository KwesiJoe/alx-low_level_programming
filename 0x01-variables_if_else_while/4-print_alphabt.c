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
		if (i == 101 | i == 113)
			continue;
		putchar(i);
	}
	putchar(10);

	return (0);
}
