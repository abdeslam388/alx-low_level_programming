#include "main.h"

/**
 * get_endianness - checks if an machin is smoll or big
 * Return: 0 for hug, 1 for smoll
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
