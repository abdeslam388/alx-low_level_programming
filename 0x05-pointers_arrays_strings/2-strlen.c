#include "main.h"
/**
 * _strlen - a function that takes a pointer to an char as parameter
 * and return length the char
 * @s: input
 * Return: n
 */
int _strlen(char *s)
{
	int n;

	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
}

