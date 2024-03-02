#include "main.h"
#include <stdio.h>
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int l, a = 0;
	/*char son[] = s;*/
	char tmp;

	while (*(s + l))
	{
		l++;
	}
	printf("l = %d\n", l);
	s[0] = 'Z';
	
	/*while (a < (l / 2))
	{
		tmp = son[l - 1 - a];
		son[a] = son[l - 1 - a];
		son[a] = tmp;
		a++;
	}*/
}
