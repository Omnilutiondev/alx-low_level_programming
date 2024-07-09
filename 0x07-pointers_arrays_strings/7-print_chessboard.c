#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - This function prints the spaces on a chessboard
 *
 * @a: This is the array of the chessboard and pieces
 *
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int rw, clmn;

	for (rw = 0; rw < 8; rw++)
	{
		for (clmn = 0; clmn < 8; clmn++)
		{
			_putchar(a[rw][clmn]);
		}
		_putchar('\n');
	}
}
