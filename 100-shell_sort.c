#include "sort.h"
/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j;
	size_t increment;
	int tmp;

	for (increment = 1; increment <= size / 3; increment = increment * 3 + 1)
	{
		for (i = increment; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= increment; j -= increment)
			{
				if (tmp < array[j - increment])
				{
					array[j] = array[j - increment];
				}
				else
				{
					break;
				}
			}
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
