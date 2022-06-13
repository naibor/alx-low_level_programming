#include <stdio.h>
/**
 * main - entry point
 *
 * Description: find fibonacci sequence of 98 numbers
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long first, second, next;
	int count  = 2;

	first = 1;
	second = 2;
	printf("%lu, ", first);
	printf("%lu, ", second);
	while (count < 98)
	{
		next = first + second;
		first = second;
		second = next;
		if (count == 97)
		{
			printf("%lu\n", next);
		} else
		{
			printf("%lu, ", next);
		}
		count++;
	}
	printf("Count%d", count);
	return (0);
}
