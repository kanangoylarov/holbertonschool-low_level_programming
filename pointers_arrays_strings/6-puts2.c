#include "main.h"
/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int a = 0;
	char *z = str;

	while (*(z + a) != 0)
	{
		_putchar(z[a]);
		a = a + 2;
	}
	_putchar('\n');
}
