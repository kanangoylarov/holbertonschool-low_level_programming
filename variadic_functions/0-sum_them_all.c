#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - is my function.
 * @n: is my var.
 * @...: is elements.
 * Return: sum of elements.
 */
int sum_them_all(const unsigned int n, ...)
{
	int z = 0;
	unsigned int i;
	va_list ap;
	va_start(ap, n);
	for (i = 0; i <= n; i++)
	{
		z = z + va_arg(ap, int);
	}
	return (z);
}
