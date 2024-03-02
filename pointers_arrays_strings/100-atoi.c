#include "main.h"
/**
 * _atoi - Beginning of code
 *
 * @s: Is variable
 *
 * Return: Variable
 */
int _atoi(char *s)
{
	int l = 0;
	int isare = 1;
	unsigned int son = 0;

	while (*(s + l) != 0)
	{
		if (s[l] >= '0' && s[l] <= '9')
		{
			if (s[l - 1] == '-')
				isare = -1;
			son = son * 10 + (s[l] - 48);
		}
		l++;
	}
	son *= isare;
	return (son);
}
