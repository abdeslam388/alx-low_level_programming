#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the programe
 * @argc: number of the argumments
 * @argv: pointure array of argc
 * Return: always 0 mean seccuses
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
