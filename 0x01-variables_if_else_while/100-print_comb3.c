#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (!(i == '8' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			j = j + 1;
		}
		i = i + 1;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
