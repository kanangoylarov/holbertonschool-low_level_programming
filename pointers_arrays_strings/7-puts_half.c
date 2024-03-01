#include "main.h"
/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int l = 0;
	int j = 0;
	char *z = str;

	while (*(z + l) != '\0')
		l++;
	for (j = l / 2; j < l; j++)
	{
		_putchar(z[j]);
	}
	_putchar('\n');
}
