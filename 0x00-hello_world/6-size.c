#include <stdio.h>

/**
 * main  - Entry point
 *
 * Return: Always 0 (Successs)
 */

int main(void)
{
	printf("size of a  char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
