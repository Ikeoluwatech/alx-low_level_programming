#include <stdio.h>
/**
 * fizzbuzz - prints number and checks for multiples of 3 and 5
 * Return: 0
 */

void fizzbuzz(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf('\n');
}
int main ()
{
	fizzbuzz();
	return (0);
}
