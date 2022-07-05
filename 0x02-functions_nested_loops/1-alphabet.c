#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 * Return: Nothing
 */
void print_alphabet(void)
{
	char i = a;

	while (i <= z)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
