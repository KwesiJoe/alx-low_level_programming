#include <stdio.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	printf(
		"Size of a char: %lu byte(s)\n"
		"Size of an int: %lu byte(s)\n"
		"Size of a long int: %lu byte(s)\n"
		"Size of a long long int: %lu byte(s)\n"
		"Size of a float: %lu byte(s)\n"
		, sizeof(char)
		, sizeof(int)
		, sizeof(long int)
		, sizeof(long long int)
		, sizeof(float)
	);

	return (0);
}
