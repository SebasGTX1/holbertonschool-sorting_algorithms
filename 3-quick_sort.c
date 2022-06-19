#include "sort.h"
/**
 * _swap - swap funtion
 * @node_1: first node
 * @node_2: second node
 * Return: no return
 */

void _swap(int *node_1, int *node_2)
{
	int temp = *node_1;

	*node_1 = *node_2;
	*node_2 = temp;
}

/**
 * partition - partition funtion
 * @array: array
 * @low: low index
 * @high: high index
 * @size: size of the array
 * Return: the partition index
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i, j = low;

	i = low - 1;

	for (; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			_swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	i++;
	_swap(&array[i], &array[high]);
	if (array[i] != array[j])
		print_array(array, size);
	return (i);
}

/**
 * quick_sort2 - quick sort funtion
 * @array: array
 * @low: low index
 * @high: high index
 * @size: size of the array
 * Return: no return
 */

void quick_sort2(int *array, int low, int high, size_t size)
{
	int p;

	if (low >= high || low < 0)
		return;
	p = partition(array, low, high, size);

	quick_sort2(array, low, p - 1, size);
	quick_sort2(array, p + 1, high, size);
}

/**
 * quick_sort - quick_sort funtion
 * @array: array
 * @size: size of the array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{
	quick_sort2(array, 0, size - 1, size);
}
