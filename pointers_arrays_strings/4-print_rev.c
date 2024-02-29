#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	char *z = s;
	int l = strlen(z);

	while (l >= 0)
	{
		_putchar(z[l]);
		l--;
	}
	_putchar('\n');

}
