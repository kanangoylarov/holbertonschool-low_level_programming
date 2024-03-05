#include "main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, b = 0;

	for (; i <= 7; i++)
	{
		for (b = 0; b <= 7; b++)
		{
			_putchar(a[i][b]);

		}
		_putchar('\n');
	}
}
