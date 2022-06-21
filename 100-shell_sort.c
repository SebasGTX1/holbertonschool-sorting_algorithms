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
	int gap = 1, i = 0, temp = 0, j = 0;

	if (!array || size < 2)
		return;
	/* max gap calculation */

	while (gap < (int)size)
		gap = gap * 3 + 1;
	gap /= 3;
	/* sorting patron*/
	while (gap > 0)
	{
		for (i = gap; i < (int)size; i++)
		{
			temp = array[i];
			j = i;
			while (j > gap - 1 && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}
	gap /= 3;
	print_array(array, size);
	}
}
