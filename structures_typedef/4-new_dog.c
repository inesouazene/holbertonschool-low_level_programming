#include "dog.h"

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

	for (length_name = 0; name[length_name] != '\0'; name++)
	{
		length_name++;
	}
	for (length_owner = 0; owner[length_owner] != '\0'; owner++)
	{
		length_owner++;
	}

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc((length_name + 1) * sizeof(char));
	newdog->owner = malloc((length_owner + 1) * sizeof(char));

		if (newdog->name == NULL || newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog->owner);
			free(newdog);
			return (NULL);
		}

	for (index = 0; name[index] != '\0'; index++)
	{
		newdog->name[index] = name[index];
	}
	newdog->name[index] = '\0';

	for (index = 0; owner[index] != '\0'; index++)
	{
		newdog->owner[index] = owner[index];
	}
	newdog->owner[index] = '\0';
	newdog->age = age;
return (newdog);
}
