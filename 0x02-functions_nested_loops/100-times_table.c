#include <stdio.h>
#include "main.h"

/**
 * print_times table- Check main
 * @n: input integer
 * Description: Function that prints natural numbers
 * from n to 98
 * Return: nothing
 */

void print_times_table(int n);
{	int i;
	int j;

	if (n < 0 || n > 15)
	{
		printf("%d");
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf(j * i);
				printf(", ");
				printf(" ");
				printf("\n");
			}
		}
		printf("\n");
	}
}

