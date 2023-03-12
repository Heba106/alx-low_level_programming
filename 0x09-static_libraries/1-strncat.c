#include "main.h"

/**
  * _strncat - concatenates two strings.
  * @dest: dest param
  * @src: src param
  * @n: integer param
  *
  * Return: src pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int counter = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (*(src + counter) != '\0')
	{
		if (counter < n)
		{
			*(dest + len + counter) = *(src + counter);
			counter++;

		}
		else
			break;
	}

	return (dest);
}

