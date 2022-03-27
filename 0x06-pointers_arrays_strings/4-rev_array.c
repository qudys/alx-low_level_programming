#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int j = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
	}
}
