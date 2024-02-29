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
	int l = 0;

	while (*(z++) != '\0')
		l++;
	z = z - l;
	while (l >= 0)
	{
		_putchar(z[l - 1]);
		l--;
	}
	_putchar('\n');

}
