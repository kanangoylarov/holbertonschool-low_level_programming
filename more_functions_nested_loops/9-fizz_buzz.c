#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Description: FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 > 0) && (i % 5 > 0))
		{
			printf("%d ", i);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3 == 0))
		{
			printf("Fizz ");
		}
		else
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
	}
	printf("\n");
	return (0);
}
