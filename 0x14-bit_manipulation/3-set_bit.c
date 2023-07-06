#include "main.h"

/**
 * set_bit - change a bit of a giv indexx to 1
 * @n: pointer to num to change
 * @index: index of the bit set to 1
 *
 * Return: 1 for succ, -1 for faux
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
