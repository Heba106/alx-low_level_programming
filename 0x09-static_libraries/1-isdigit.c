#include "main.h"

/**
  * _isdigit - uppercase letters
  * @c: char to check
  *
  * Return: 0 or 1
  */

int _isdigit(int c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
