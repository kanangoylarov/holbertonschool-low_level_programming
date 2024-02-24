#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')

	{
	putchar((char)a);
	a++;
	}

	while (b <= 'Z')
	{
	putchar((char)b);
	b++;
	}
	putchar('\n');
	return (0);
}
