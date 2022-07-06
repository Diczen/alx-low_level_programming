#include <stdio.h>
#include "main.h"

/**
 * print_times table- Check main
 * @n: input integer
 * Description: Function that prints natural numbers
 * from n to 98
 * Return: nothing
 */

void print_times_table(int n)
{	int i;
	int j;
	int k;

	if (n < 0 || n > 15)
	{
		printf("");
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i
				printf(k);
				printf(", ");
				printf(" ");
				printf("\n");
			}
		}
		printf("\n");
	}
}

