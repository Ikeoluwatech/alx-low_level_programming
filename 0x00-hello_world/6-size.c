#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when code works
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("size of an  int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float:  %lu byte(s)", sizeof(float));
	return (0);
}
