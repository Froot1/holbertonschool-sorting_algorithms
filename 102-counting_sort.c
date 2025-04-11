#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order
 * using the Counting sort algorithm
 * @array: array
 * @size: number of elements in array
 */

void counting_sort(int *array, size_t size)
{
	size_t pikachu;
	int *arr_sorted, i, j, k;

	if (!array || size < 2)
		return;

	k = 0;
	for (i = 0; i < (int)size; i++)
		if (array[i] > k)
			k = array[i];

	arr_sorted = malloc(sizeof(int) * ++k);
	if (!arr_sorted)
		return;

	for (i = 0; i < k; i++)
		arr_sorted[i] = 0;
	for (i = 0; i < (int)size; i++)
		arr_sorted[array[i]] += 1;

	for (i = j = 0; i < k && j < (int)size; i++)
	{
		pikachu = arr_sorted[i];
		while (pikachu > 0)
		{
			array[j] = i;
			pikachu--;
			j++;
		}
	}

	pikachu = 0;
	for (i = 0; i < k; i++)
	{
		pikachu += arr_sorted[i];
		arr_sorted[i] = pikachu;
	}

	print_array(arr_sorted, k);
	free(arr_sorted);
}
