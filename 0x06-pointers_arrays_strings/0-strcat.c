#include "main.h"

/**
  * _strcat - concatenates two strings.
  * @dest: dest param
  * @src: src param
  *
  * Return: src pointer
  */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int counter = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (*(src + counter) != '\0')
	{
		*(dest + len + counter) = *(src + counter);
		counter++;
	}

	return (dest);
}

