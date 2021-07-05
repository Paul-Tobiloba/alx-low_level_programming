#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, val = 0, sum1 = 0, sum2 = 0, num;

	num = size * size;
	while (i < num)
	{
		val = a[i];
		sum1 = sum1 + val;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < (num - 1))
	{
		val = a[i];
		sum2 = sum2 + val;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}

