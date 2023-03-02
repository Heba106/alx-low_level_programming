#include "main.h"

/**
  *_strncpy - a function that copies a string.
  *
  * @dest: first string
  * @src: seconed string
  * @n: integer param
  *
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (*(src + j) != '\0')
			*(dest + j) = *(src + j);
		else
			break;
	}
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}

	return (dest);
}
