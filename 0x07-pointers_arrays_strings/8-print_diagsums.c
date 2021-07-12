#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of 
 * integers.
 * @a:matrix
 * @size: size of square matrix
 * 
 * Return: returns void
 */

void print_diagsums(int *a, int size)
{
	int main_diagonal_sum = 0;
	int antidiagonal_sum = 0;
	int cell, i = 1;

	for (cell = 0; cell < size * size; cell = cell + size + 1)
	{
		main_diagonal_sum = main_diagonal_sum + *(a + cell);	
	}

	a = a - size * size;
	for (cell = size - 1; size - i == 0; cell = cell + size - i)
	{
		antidiagonal_sum = antidiagonal_sum + *(a + cell);
		i++;
	}

	printf("%d, %d\n", main_diagonal_sum, antidiagonal_sum);
}
