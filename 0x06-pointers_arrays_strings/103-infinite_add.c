#include "main.h"
/**
 * infinite_add - Function
 *
 * Description: adds two numbers.
 *
 * @n1: pointer param of type char, input numbers
 * @n2: pointer param of type char, input numbers
 * @r: pointer param of type char, stores the result
 * @size_r: parameter of type int, buffer size
 *
 * Return: returns a pointer as the result else 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *sum = r;
	char *num1 = n1;
	char *num2 = n2;

	*sum = *num1 + *num2;

	printf("N1:%s\n",n1);
	printf("*N1:%d\n", *n1);

	printf("MY *num1:%d\n",*num1);
	printf("MY num1:%s\n", num1);
	printf("N2:%s\n",n2);
	printf("*N2:%d\n",*n2);
	printf("MY *num2:%d\n",*num2);
        printf("MY num2:%s\n", num2);
	printf("r:%s\n",r);
	printf("*r:%d\n",*r);
	printf("SIZE:%d\n", size_r);


	return (sum);
}
