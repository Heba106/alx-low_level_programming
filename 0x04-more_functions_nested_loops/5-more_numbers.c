#include "main.h"

/**
  * more_numbers - print more numbers
  */

void more_numbers(void)
{
	int a;
	int i;
	int j;

	for (a = 0; a <= 9; a++)
	{
		j = '0';
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(j);
			j++;
			if (i == 9)
			{
				j = '0';
			}
		}
		_putchar('\n');
	}
}
