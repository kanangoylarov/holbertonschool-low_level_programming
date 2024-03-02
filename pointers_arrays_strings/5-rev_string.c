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
	int l = 0, a = 0;
	char *son = s;
	char tmp;

	while (*(s + l))
	{
		l++;
	}
	
	while (a < (l / 2))
	{
		tmp = son[l - 1 - a];
		son[l - 1 - a] = son[a];
		son[a] = tmp;
		a++;
	}
}
