#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_strings - func
  * @separator: param
  * @n: param
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int j;
	char *s;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			j = 0;
			s = va_arg(args, char*);
			if (s)
			{
				while (s[j] != '\0')
				{
					printf("%c", s[j]);
					j++;
				}
			}
			else
				printf("nil");
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
