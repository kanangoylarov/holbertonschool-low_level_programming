#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - check the code.
 *
 * @c: variable
 *
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int q = islower(c);
	_putchar(q + '0');
	return (0);
}
