#include "sort.h"
/**
 * swap - swaps two numbers
 * @a: first number
 * @b: second numbr
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * selection_sort - sorts an array of integers in
 * ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_h;

	for (i = 0; i < size - 1; i++)
	{
		min_h = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_h])
				min_h = j;

		if (min_h != i)
			swap(&array[min_h], &array[i]);
		print_array(array, size);
	}
}
