#include "main.h"

/**
  * _strlen - a function that returns the length of a string.
  *
  * @s: a string
  *
  * Return: length
  */

int _strlen(char *s)
{
	int str_length = 0;

	while (*s != '\0')
	{
		str_length++;
		s++;
	}

	return (str_length);
}
