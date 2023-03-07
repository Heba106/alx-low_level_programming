#include "main.h"

/**
  * _strchr - func
  * @s: param
  * @c: param
  * Return: pointer
  */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}

	return (0);
}
