#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers in 
 * ascending order using the Bubble sort algorithm
 * @array: list of integer elements to be sorted
 * @size: size of array
 *
 * Return: No value
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array, j, j + 1);
				print_array(array, size);
				flag = 1;
			}
		}
		if (!flag)
			break;
	}
}
