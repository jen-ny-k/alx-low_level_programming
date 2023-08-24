#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: the array
 * @n: number of elements
 * Return: not return
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
