#include <stdio.h>
/**
 * main - entry point
 *
 * Description: find fibonacci sequence of 50 numbers
 *
 *
 */
int main(void)
{
	long int first, second, next;
	int count  = 2;

	first = 1;
	second = 2;
	
	printf("%ld, ", first);
        printf("%ld, ", second);

	while(count < 50)
	{

		next = first + second;
		first = second;
		second = next;

		if (count == 49)
		{
			printf("%ld\n", next);
		} else
		{
			printf("%ld, ", next);
		}
		count ++;
	}



	return(0);

}
