#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char *a = "_putchar";

	while (*(a + i))
	{
		_putchar(*(a + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
