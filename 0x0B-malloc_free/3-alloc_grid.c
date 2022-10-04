#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Return poimnter to 2dim array
 * @width: Number of columns
 * @height: Number of rows
 * Return: 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **array, column, rows;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeif(int *) * height);
	if (array == NULL)
		return (NULL);
	for (column = 0; column < height; column++)
	{
		array[column] = (int *)malloc(sizeof(int) * width);
		if (array[column] = NULL)
			return (NULL);
	}

	for (column = 0; column < height; column++)
		for (rows = 0; rows < width; rows++)
			array[column][rows] = 0;
	return (array);
}
