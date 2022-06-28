#include "main.h"
/**
 * _strdup - Function
 *
 * Description: contains a copy of a string parameter
 *
 * @str: parameter of type char, string to copy
 *
 * Return: returns pointer to newly allocated space
 * returns NULL if str is Null
 */
char *_strdup(char *str)
{
	char *store;
	unsigned int len = 0, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		len++;
		str++;
	}
	store = malloc(sizeof(char) * (len + 1));
	if (store == NULL)
	{
		return (NULL);
	}
	for (; x < len; x++)
	{
		store[x] = str[x];
		str++;
	}
	return (store);

}
