#include "main.h"
/**
 * calsquare - auxiliar function for calculate potential
 * @n: number
 * @i: potential root
 * Return: the result
 */
int calsquare(int n, int i)
{
	int root = (i * i);

	if (root == n)
		return (i);
	else if (root < n)
		return (calsquare(n, i + 1));
	return (-1);
}
/**
 * _sqrt_recursion - main function. return the natural square root
 * @n: n
 * Return: root
 */
int _sqrt_recursion(int n)
{
	return (calsquare(n, 1));
}
