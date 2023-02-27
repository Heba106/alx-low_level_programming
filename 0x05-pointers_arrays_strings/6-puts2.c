#include "main.h"
/**
  * puts2 - function should print only one character out of two
  * starting with the first one
  * @str: input
  * Return: print
  */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	str -= len;
	if ((len % 2) != 0)
	{
		len--;
	}
	for (i = 0; i <= len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
