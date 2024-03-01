#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	char *z = s;
	char tmp;
	int a, l = 0;
	while (*(z + l) >= '\0')
		l++;
	--l;
	while (l >= 0)
	{
		tmp = s[l];
		z[a] = tmp;
		a++;
		l--;
	}
	z[a + 1] = '\0';
}
