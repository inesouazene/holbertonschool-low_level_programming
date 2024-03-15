#include "dog.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: string destination
* @src: string source
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{

	int num_char;
	int i;

	for (num_char = 0; src[num_char] != '\0'; num_char++)
	{
	}
	for (i = 0; i < num_char; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
* new_dog - function that creates a new dog.
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog,
* or NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int index, length_name, length_owner;
	dog_t *newdog;

	length_name = 0;
	length_owner = 0;

	for (index = 0; name[index] != '\0'; index++)
	{
	}
	for (index = 0; owner[index] != '\0'; index++)
	{
	}

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc((length_name + 1) * sizeof(char));
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}

	newdog->owner = malloc((length_owner + 1) * sizeof(char));
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}

	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

return (newdog);
}
