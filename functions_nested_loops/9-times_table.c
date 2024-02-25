#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{

	int i, j;

	for (i = 0; i <= 10; i++)
	{
	int a = 0;

	for (j = 0; j <= 10; j++)
	{
		a += i;
		putchar((char) a);
		_putchar(',');
		_putchar(' ');
	}
	putchar('\n');
	}
}
