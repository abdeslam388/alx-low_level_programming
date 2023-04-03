#include "main.h"
/**
 * print_chessboard - Entry a table
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	for (int row = 0; row < 8; row++)
	{	{
		for (int col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
		}
}
}
