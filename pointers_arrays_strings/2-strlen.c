#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{

	int a = 0;

	while (*(s++))
		a++;

	return (a);
}
