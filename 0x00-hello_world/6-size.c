#include <stdio.h>

/**
 * main - Starting point
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of an long: %d byte(s)\n", sizeof(long int));
	printf("Size of an long long: %d byte(s)\n", sizeof(long long int));
	printf("Size of an float: %d byte(s)\n", sizeof(float));
	return (0);
}
