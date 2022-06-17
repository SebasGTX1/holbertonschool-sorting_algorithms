#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: No return
 */

void bubble_sort(int *array, size_t size)
{
	int i = 1, temp = 0, bol = 0;

	while (1)
	{
		for (; (size_t)i < size; i++)
		{

			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				bol = 1;
				print_array(array, size);
			}
		}
		if (!bol)
			break;
		i = 0;
		bol = 0;
	}
}
