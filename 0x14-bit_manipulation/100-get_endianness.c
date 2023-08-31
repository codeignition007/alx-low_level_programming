#include "main.h"

/**
 * get_endianness - if a machine is small or big endian, confirm
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
