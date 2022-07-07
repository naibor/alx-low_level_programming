#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - Function
 *
 * Description: sums all parameters
 *
 * @n: a constant parameter of type unsigned int
 *
 * Return: returns a sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a_list;
	int sum = 0;
	int i = n;

	if (n == 0)
		return (0);
	/*intialize the arguments to store*/
	va_start(a_list, n);
	/*loop throught the items and get sum*/
	while (i != 0)
	{
		sum += va_arg(a_list, int);
		i--;
	}
	va_end(a_list);

	return (sum);

}
