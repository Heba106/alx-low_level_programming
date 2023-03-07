#include "main.h"
/**
 * _strspn - function
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (s[i])
	{
		while(accept[j])
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (counter);
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);
}
