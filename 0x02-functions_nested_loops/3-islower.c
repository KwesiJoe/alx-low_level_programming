#include "main.h"
/**
* _islower - checks for lowercase character
* @c: character to check
*
* Description: checks for lowercase character
* Return: 1 if c is lower case else 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}