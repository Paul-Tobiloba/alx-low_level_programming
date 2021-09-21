#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int j;
	int i;
	int x = size;

	if (size > 0)
		for (j = 0; j < size; j++)
		{
			x--;
			for (i = 0; i < size; i++)
			{

				if (i < x)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');

		}
	else
		_putchar('\n');
}
