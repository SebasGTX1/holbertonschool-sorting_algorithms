#include "sort.h"
/**
 * shell_sort - funtion that sorts an array
 * with the shell sort algorithm and the
 * Knuth sequence
 * @array: array to be sorted
 * @size: size of the array
 * Return: no return
 */
void shell_sort(int *array, size_t size)
{
	int gap = 1, i = 0, temp = 0;

	if (!array || size <= 1)
		return;
	/* max gap calculation */

	while (gap < (int)size)
		gap = gap * 3 + 1;
	gap /= 3;
	/* sorting patron*/
	while (gap > 0)
	{
		for (i = 0; i < (int)size; i++)
		{
			if ((i + gap) < (int)size && array[i] > array[i + gap])
			{
				temp = array[i];
				array[i] = array[i + gap];
				array[i + gap] = temp;
				i = 0;
			}
		}
	gap /= 3;
	print_array(array, size);
	}
}
