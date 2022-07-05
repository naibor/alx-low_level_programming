#include "dog.h"
/**
 * new_dog - Function
 *
 * Description: creates a new dog.
 *
 * @name: pointer parameter of type char
 * @age: parameter of type float
 * @owner:pointer parameter of type char
 *
 * Return: returns type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pluto;
	int name_length = 0, owner_length = 0, x;
	char *copyname, *copyowner;

	/*check if name or owner is null return null*/
	if (name == NULL || owner == NULL)
		return (NULL);
	/*calculate lengths*/
	for (x = 0; name[x] != '\0'; x++)
		name_length++;
	for (x = 0; owner[x] != '\0'; x++)
		owner_length++;
	/*alocate memory space to struct and check if null*/
	pluto = malloc(sizeof(dog_t));
	if (pluto == NULL)
		return (NULL);
	/*allocate memory to items in data type and check if null*/
	copyname = malloc(name_length + 1);
	if (copyname == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		copyname[x] = name[x];
	copyname[x] = '\0';
	copyowner = malloc(owner_length + 1);
	if (copyowner == NULL)
		return (NULL);
	for (x = 0; owner[x]; x++)
		copyowner[x] = owner[x];
	copyowner[x] = '\0';
	/*assign values*/
	pluto->name = copyname;
	pluto->age = age;
	pluto->owner = copyowner;
	return (pluto);
}
