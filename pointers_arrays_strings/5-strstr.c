#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int d = 0;
	int c;

	if (*needle == 0)
		return (haystack);

	while (*(needle + d))
		d++;

	while (*(haystack + a))
	{
		if (haystack[a] == needle[b])
		{
			c = a;
			while (*(needle + b))
			{
				if (needle[b] != haystack[a + b])
					break;
				b++;
			}

			if (b == d)
				return ((haystack + c));
		}
		b = 0;
		a++;
	}
	return ('\0');
}
