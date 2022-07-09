#include "main.h"

/**
 * print_triangle - check the main file
 * @size: Value of triangle size
 * Description: A function that prints a triangle, followed by a new line
 * Return: 0;
 */

void print_triangle(int size)
{

	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;

		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
