#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int d = 0;

	while (*(needle + d))
		d++;

	while (*(haystack + a))
	{
		if (haystack[a] == needle[b])
		{
			while (*(needle + b))
			{
				if (needle[b] != haystack[a + b])
					break;
                        	b++;
			}
			if (b == d)
				return ((haystack + a));
		}
		a++;
	}
	return ('\0');
}
