#include "main.h"
/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (*(s + a))
		a++;
	while (*(s + b))
	{
		if (s[b] == c)
		{
			break;
		}
		b++;
	}
	if (a == b)
		return (0);
	for (; b <= a; b++)
	{
		s[c] == s[b];
		c++;
	}
	s[c + 1] = 0;
	return (s);
}
