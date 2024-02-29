#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	char *z = s;
	int a;

	a = 0;

	while (*(z + a) != '\0')
	{
		a++;
	}
	return (a);
}
