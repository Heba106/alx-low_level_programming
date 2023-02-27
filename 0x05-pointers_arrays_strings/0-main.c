#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;
	n = 402;
	reset_to_98(&n);
	printf("n=%d\n",n);

	return (0);
}
