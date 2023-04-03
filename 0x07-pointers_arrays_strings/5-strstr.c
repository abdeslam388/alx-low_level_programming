#include "main.h"
/**
 * _strstr - fonction for is used to search for a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *p = needle;

		while (*h == *p && *p != '\0')
		{
			h++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
