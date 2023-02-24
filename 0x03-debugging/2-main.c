#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 975;
	b = 975;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
