#include "holberton.h"
/**
 * is_prime_number_2 - process prime numbers
 * @n: input number
 * @m: number
 * Return: 1 if the numbre is a prime number, 0 otherwise.
 */
int is_prime_number_2(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0)
	{
		return (0);
	}
	return (is_prime_number_2(n, (m - 1)));
}

/**
 * is_prime_number - prime numbers
 * @n: input number
 * Return: 1 if the numbre is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_2(n, (n - 1)));
}
