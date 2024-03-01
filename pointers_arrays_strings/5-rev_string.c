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
	int l = 0;
	char tmp;
	int a = 0;
	int q;

	while (*(z + l) != '\0')
		l++;
	q = l;

	while (l > (q / 2))
	{
		tmp = z[a];
		z[l] = tmp;
		z[a] = tmp;

		a++;
		l--;
	}
}
