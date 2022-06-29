#include "main.h"
/**
 * argstostr - Function
 *
 * Description: concatenates all the arguments of your program
 *
 * @ac: parameter of type int
 * @av: pointer to a pointer of type char
 *
 * Return: returns NULL if any of the vals is 0 and char otherwise
 */
char *argstostr(int ac, char **av)
{
	char *str = "";
	int i, x, length, y = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			length++;
		}
		length += ac;
	}
	length++;
	str = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			str[y] = av[i][x];
			y++;
		}
		str[y] = '\n';
		y++;
	}
	return (str);

}
