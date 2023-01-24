#include "sort.h"

/**
 * swap - swaps two positions
 * @array: array of integers
 * @position1: first position
 * @position2: second position
 */
void swap(int *array, int position1, int position2)
{
	int temp;

	temp = array[position1];
	array[position1] = array[position2];
	array[position2] = temp;
}

/**
 * partition - partitions an array into sub-arrays using Lomuto's scheme
 * @array: array to be partitioned
 * @low: leftmost index of array
 * @high: rightmost index of array
 * @size: size of array
 *
 * Return: index of smaller element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j);
			print_array(array, size);
		}
	}
	swap(array, i + 1, high);

	return (i + 1);
}

/**
 * quicksort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @low: leftmost index of array
 * @high: rightmost index of array
 * @size: size of array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - quick sorts an array
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
