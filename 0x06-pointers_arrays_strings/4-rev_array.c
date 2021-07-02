#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int idx = 0, counter_max = n / 2, temp_store;

	while (idx < counter_max)
	{
		temp_store = *(a + idx);
		*(a + idx) = *(a + n - idx - 1);
		*(a + n - idx - 1) = temp_store;
		idx++;
	}

}
