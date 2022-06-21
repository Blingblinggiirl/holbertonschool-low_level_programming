#include "main.h"
/**
 * primenum - tells if is prime number
 * @i: divide
 * @n: n
 * Return: 1 if i is 1 otherwise 0
 */
int primenum(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
		return (0);
	else
		return (primenum(i - 1, n));
}
/**
 * is_prime_number - function that return prime numbers
 * @n: number
 * Return:1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (primenum(n - 1, n));
}
