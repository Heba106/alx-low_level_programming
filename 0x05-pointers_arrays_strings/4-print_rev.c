#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line.
  *
  * @s: string pointer
  */

void print_rev(char *s)
{
	char *str;

	str = s;

	while (*s != '\0')
	{
		++s;
	}
	while (s >= str)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

