#include "main.h"

/**
 * prime - returns 1 if the number is prime
 *
 * @n: the number to check
 * @x: the number that allows us to check recursivly
 * Return: 1 if n is prime, 0 otherwise
 */
int prime(int n, int x)
{

	if (n <= 1)
	{
		return (0);
	}
	if (x > (n / 2))
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (prime(n, x + 1));
}

/**
 * is_prime_number - a wrapping function for prime(n,x)
 *
 * @n: the number to check
 * Return: the value of prime(n,x)
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

