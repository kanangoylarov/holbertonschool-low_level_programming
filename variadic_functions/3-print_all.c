#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - To be is a to be the value of a variable
 * @format: list of types of arguments passed to the function
 *
 * Return: printing everything
 */
void print_all(const char * const format, ...)
{
	size_t size = 1, i = 0;
	int z = 0;
	const char *formatcp = format, *str;

	va_list ap;

	while (*(format + z))
		z++;
	if (z == 0)
		printf("(nil)");

	va_start(ap, format);
	while (format && i < size)
	{
		size = z;
		switch (*(formatcp++))
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (i != (size - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
