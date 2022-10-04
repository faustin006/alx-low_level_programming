#include "main.h"

/**
 * alloc_grid - function
 *
 * @width: Array width
 * @height: Array height
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int ** array;
	int i = 0, j;

	it (width == 0 | |  height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for ( i < height, i++)

		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[1] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}