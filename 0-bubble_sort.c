#include "sort.h"

/**
 * swap - use to swap two numbers
 * @a: first number
 * @b: second number
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * bubble_sort - function use to sort an array of integers
 * in ascending order
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
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
