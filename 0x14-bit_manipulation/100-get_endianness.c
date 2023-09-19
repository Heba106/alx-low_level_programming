#include "main.h"
/**
 * get_endianness - it checks the endianness
 *
 * Return: 0 if big end, 1 if little end
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
