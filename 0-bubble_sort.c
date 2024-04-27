#include "sort.h"

/**
 * bubble_sort - sort array elements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int x, y;
	int tmp;
	int swapp;

	if (size <= 1)
		return;
		for (x = 0; x < size - 1; x++)
		{
			swapp = 0;
			for (y = 0; y < size - 1 - x; y++)
			{
				if (array[y] > array[y + 1])
				{
					tmp = array[y];
					array[y] = array[y + 1];
					array[y + 1] = tmp;
					swapp = 1;
					print_array(array, size);
					}
			}
					if (swapp == 0)
					break;
	}
}

