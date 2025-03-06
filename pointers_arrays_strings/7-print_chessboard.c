#include "main.h"
/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: The chessboard (2D array of characters)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = j = 0;
	while (i < 8)
	{
	j = 0;
	while (j < 8)
	{
	_putchar(a[i][j]);
	j++;
	}
	putchar('\n');
	i++;
	}
}
