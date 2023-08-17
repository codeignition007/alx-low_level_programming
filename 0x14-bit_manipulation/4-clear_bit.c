#include "main.h"

/**
 * clear_bit - the value of bit to 0
 * @n: pointer of changed number
 * @index: index of bit to be cleared
 *
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
