#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **twod;

	if (width == 0)
	{
		return (NULL);
	}
	twod = (int **)malloc(height * sizeof(int *));
	if (twod == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		twod[i] = (int *) malloc(width * sizeof(int));
		if (twod[i] == NULL)
		{
			for (; i >= 0; i--)
				free(twod[i]);

			free(twod);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twod[i][j] = 0;
		}
	}
	return (twod);
}
