#include "main.h"

/**
  * _strpbrk - function
  * @s: param
  * @accept: param
  * Return: string
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
