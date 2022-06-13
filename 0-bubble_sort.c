#include "sort.h"

/**
 * bubble_sort - main function that sort
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;

	if (size > 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			// Last i elements are already in place
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
			}
		}
	}
}
