#include "main.h"
/**
 * _strcat - Concatenates the string
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a))
		a++;
	while (*(src + b))
	{
		dest[a + b] = src[b];
		b++;
	}
	return (dest);
}
