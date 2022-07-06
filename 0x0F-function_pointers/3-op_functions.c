#include "3-calc.h"
/**
 * op_add - Function
 *
 * Description: calculates sum of two values
 *
 * @a: parameter of type int, one of the values
 * @b: parameter of type in, the other value
 *
 * Return: returns int, sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);

}

/**
 * op_sub - Function
 *
 * Description: calculates difference of two values
 *
 * @a: parameter of type int, one of the values
 * @b: parameter of type in, the other value
 *
 * Return: returns int, difference of numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function
 *
 * Description: calculates product of two values
 *
 * @a: parameter of type int, one of the values
 * @b: parameter of type in, the other value
 *
 * Return: returns int, product of numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function
 *
 * Description: calculates division of two values
 *
 * @a: parameter of type int, one of the values
 * @b: parameter of type in, the other value
 *
 * Return: returns int, division of numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function
 *
 * Description: calculates remainder of two values divided
 *
 * @a: parameter of type int, one of the values
 * @b: parameter of type in, the other value
 *
 * Return: returns int, remainder of numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

