#include "sort.h"
/**
 * bubble_sort - s
 * @array: s
 * @size: s
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
/**
 * swap - swap ints
 * @a: int 1
 * @b: int 2
 */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
