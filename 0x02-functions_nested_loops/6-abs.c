#include "main.h"
/**
* _abs - returns the absolute value of a number
* @n: integer to return absolute value of
*
* Description: returns the absolute value of a number
* Return: absolute value ob n
*/
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
