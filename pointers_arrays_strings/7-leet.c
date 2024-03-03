#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int a = 0;

	while (*(str + a))
	{
		if (str[a] == 'a' || str[a] == 'A')
			str[a] = '4';
		else if (str[a] == 'e' || str[a] == 'E')
			str[a] = '3';
		else if (str[a] == 'o' || str[a] == 'O')
			str[a] = '0';
		else if (str[a] == 't' || str[a] == 'T')
			str[a] = '7';
		else if (str[a] == 'l' || str[a] == 'L')
			str[a] = '1';
		a++;

	}
	return (str);
}
