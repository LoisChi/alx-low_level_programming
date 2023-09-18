#include "main.h"

/**
 * alloc_grid - Entry point
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **i = malloc(height * sizeof(int *));
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (i == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		i[a] = calloc(width, sizeof(int));
		if (i[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(i[b]);
			}
			free(i);
			return (NULL);
		}
	}
	return (i);
}
