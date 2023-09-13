#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function checks times table
 * @n: parameter to be checked
 */

void print_times_table(int n)
{
	if (n < 15 || n < 0)
	{
		return;
	}
	int i, j;
	{
		for (i = 0; i <= n; i++)
	}
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}
