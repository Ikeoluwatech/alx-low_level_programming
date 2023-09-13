#include <stdio.h>
/**
 * main - function finds multiple of 3 and 5 below 10
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;

	}
	printf("%d\n", sum);
	return (0);

}
