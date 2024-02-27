#include "main.h"
/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int n)
{

	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
