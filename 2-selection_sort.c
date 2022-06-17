#include "sort.h"
/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, minor = 0, comp = 0;
	int index = 0, bol = 0;

	for (; i < size; i++)
	{
		index = array[i];
		bol = 0;
		for (j = i; j < size; j++)
		{
			if (index > array[j])
			{
				comp = j;
				index = array[j];
				bol = 1;
			}

			if (j == size - 1 && i != size - 1 && bol == 1)
			{
				minor = array[i];
				array[i] = array[comp];
				array[comp] = minor;
				print_array(array, size);
			}
		}
	}

}
