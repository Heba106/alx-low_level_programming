#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat -func
  * @s1: string
  * @s2: string
  * @n: intger
  * Return: return
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int i = 0;
	char *ptr;
	unsigned int j = 0;

	if (s1 != NULL)
	{
		while (s1[i++] != '\0')
			len1++;
	}

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	while (s2[j] != '\0' && j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr [i] = '\0';
	return (ptr);
}
