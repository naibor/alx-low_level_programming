#include "main.h"
/**
 * string_nconcat -  Function
 *
 * Description: concatenates two strings
 *
 * @s1: pointer parameter of type char, first string
 * @s2: pointer parameter of type char, other string
 * @n: parameter of type unsigned int, number of bytes
 *
 * Return: returns a pointer to new string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, x = 0;
	char *alloc;

	/*if NULL is passed for the strings treat it as empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*length of string 1*/
	while (s1[x++] != '\0')
		length1++;
	/*allocate memory check if it's NULL*/
	alloc = malloc(sizeof(char) * (length1 + n) + 1);
	if (alloc == NULL)
		exit(98);
	/*concatenate the two strings s1 and ch using their pointers*/
	for (x = 0; x < length1; x++)
	{
		alloc[x] = s1[x];
	}
	for (x = 0; s2[x] && x < n; x++)
		alloc[length1++] = s2[x];
	alloc[length1] = '\0';
	return (alloc);

}
