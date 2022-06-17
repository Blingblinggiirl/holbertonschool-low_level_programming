#include "main.h"
/**
 * reverse_array - arry of ints reverse
 * @a: int
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	for (n--; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

	}
}
