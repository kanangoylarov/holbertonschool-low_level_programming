#include "main.h"
/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;
	int a = 0;

	while (*(src + a))
		a++;

	while (*(src + b) && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (*(dest + a) && a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
