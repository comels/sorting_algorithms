#include <stdio.h>
#include "sort.h"
/**
 * swap - function that swap two int
 * @a: the fisrt num
 * @b: the second num
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 * partition - function that find the partition position
 * @array: the array to sort
 * @low: the first index of the array
 * @high: the last index of the array
 * @size: the size of the array
 * Return: i + 1
 */
int partition(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);

			if (j != i)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);

	if (high != (i + 1))
		print_array(array, size);

	return (i + 1);
}
/**
 * quickSort - function that sort the divided array
 * @array: the array to sort
 * @low: the first index of the array
 * @high: the last index of the array
 * @size: the size of the array
 */
void quickSort(int array[], int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - function principal
 * @array: the array to sort
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSort(array, 0, (size - 1), size);
}
