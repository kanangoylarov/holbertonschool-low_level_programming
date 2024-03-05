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

	while (*(s + a))
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	return (0);
}
