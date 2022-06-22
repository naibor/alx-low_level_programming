#include "main.h"
/**
 * _sqrt_recursion - Function
 *
 * Description: returns the natural square root of a number
 *
 * @n: parameter of type int
 *
 * Return: returns squat root of n, returns 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (check_non_squareroot(n) == 0)
	{

		return (-1);
	}
	else
	{
		return (_sqrt(n, n / 2));
	}
}
/**
 * _sqrt - Function
 *
 * Description: finds the square root of a number
 *
 * @root: parameter of type int, guessed root
 * @n: parameter of type int, get square root of
 *
 * Return: returns square root of num1
 */
int _sqrt(int n, int root)
{
	if ((root * root) > n)
	{
		return (_sqrt(n, root / 2));
	}
	else if (root * root < n)
	{
		return (_sqrt(n, root + 1));
	}
	if (root * root == n)
		return (root);
	return (-1);
}
/**
 * check_non_squareroot - Function
 *
 * Description: checks if a number is a squareroot
 *
 * @num: number to check
 *
 *  Return: 0 or 1
 */
int check_non_squareroot(int num)
{
	if ((num % 10 ==  0
	|| num % 10 == 1
	|| num % 10 == 4
	|| num % 10 == 5
	|| num % 10 == 6
	|| num % 10 == 9)
	&& (sum_num(num) == 1
	|| sum_num(num) == 4
	|| sum_num(num) == 7
	|| sum_num(num) == 9))
	{
		return (1);
	}
	else

	return (0);
}
/**
 * sum_num - Function
 *
 * Description: calculates the sum of the digits in num
 *
 * @num: parameter of type int
 *
 * Return: returns the sum
 */
int sum_num(int num)
{
	if (num < 10)
	{
		return (num);
	}
	return (sum_num(num % 10 + sum_num(num / 10)));
}
