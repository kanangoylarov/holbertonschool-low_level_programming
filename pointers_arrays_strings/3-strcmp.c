#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference.
 *         If str1 == str2, 0.
 *         If str1 > str2, unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*(s1 + a) && *(s2 + a))
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	if (*s1 == *s2)
		return (0);
	else if (*(s1 + a + 1) == 0)
		return (-67);
	else
		return (67);
}
