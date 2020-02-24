#include "holberton.h"
/**
 *print_chessboard - print multidimensional
 *@a: receive a muldidimensional array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, y = 0;

	while (i < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[i][y]);
			y++;
		}
		_putchar('\n');
		i++;
	}
}
