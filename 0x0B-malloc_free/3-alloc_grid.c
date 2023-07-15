#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**/

int **alloc_grid(int width, int height)
{
	int* p[height][width];
	int x;
	int y;
	int **m;
	

	if (width == 0 || height == 0)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			p[x][y] = 0;
		}
	}

	m = (int *) malloc(width * height * sizeof(int));
	m = &p;
	return (p);
}
