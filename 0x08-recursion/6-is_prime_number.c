#include "main.h"
/**
 * is_prime_number - Function
 *
 * Description: chaecks if a number is a prime number
 *
 * @n: parameter of type int
 *
 * Return: returns 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - Function
 *
 * Description: calculates if num is prime
 *
 * @num: parameter of type int, our num
 * @i: iterate
 *
 * Return: returns 0 if fails or 1 if success
 */
int prime(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (num % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(num, i - 1));
}
