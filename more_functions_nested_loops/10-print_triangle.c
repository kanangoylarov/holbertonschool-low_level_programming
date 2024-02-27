#include "main.h"
/**
  * print_triangle - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: empty
  */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
			{
				_putchar(32);
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
