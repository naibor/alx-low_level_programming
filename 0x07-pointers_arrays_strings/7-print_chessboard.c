#include "main.h"
/**
 * print_chessboard - Function
 *
 * Description: prints the chessboard.
 *
 * @a: parameter of type char, array
 *
 */
void print_chessboard(char (*a)[8])
{
	int x, j;

	for (x = 0; x < 8; x++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[x][j]);
		_putchar('\n');
	}
}
