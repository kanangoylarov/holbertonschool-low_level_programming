#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return - Always 0.
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (; i <= 9; i++)
	{
		for (; j <= 14; j++)
		{
		if (j > 9)
			_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		}
	}
	_putchar('\n');

}
