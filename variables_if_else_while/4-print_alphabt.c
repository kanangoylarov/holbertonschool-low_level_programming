#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')

	{

	if (a == 'q' || a == 'e')
	{
	continue;
	}

	putchar((char)a);
	a++;
	}
	putchar('\n');
	return (0);
}
