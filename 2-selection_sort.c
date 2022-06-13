#include "sort.h"
/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @size: size of the array
 * @array: array to sort
 */
void selection_sort(int *array, size_t size)
{

	size_t i, j, min;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}

}
