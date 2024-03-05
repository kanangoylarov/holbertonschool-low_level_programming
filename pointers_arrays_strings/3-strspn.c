#include "main.h"
/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b = 0;
	int c;

	while (*(s + a))
	{
		c = 0;
		b = 0;

		while (*(accept + b))
		{
			if (s[a] == accept[b])
			{
				c = 1;
				break;
			}
			b++;
		}
		if (c == 0)
			break;
		a++;
	}
	return (a);
}
