#include "main.h"

/**
 * set_bit - bit set to index 1
 * @n: pointer of changed number
 * @index: the bit index is set to 1
 *
 * Return: 1 for success, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
