#include "main.h"

/**
  * cap_string - capitalize string
  * @s: string
  * Return: pointer to string
  */
char *cap_string(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ' ' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}' ||
			s[i - 1] == '\t')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
