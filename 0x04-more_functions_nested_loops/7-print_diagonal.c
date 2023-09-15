#include "main.h"
/**
 * print_diagonal - function prints diagonal line
 * @n: parameter to be checked
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 1; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
