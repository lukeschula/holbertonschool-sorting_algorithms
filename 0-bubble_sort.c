#include "sort.h"
/**
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int sw,
	
	if (size < 2)
	{
		return;
	}

	for (x = 0; x<= size; x++)
	{
		if (array[x + 1])
		{
			for (y = 0; y <= size; y++)
			{
				if (array[y + 1])
				{
					if (array

