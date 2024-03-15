#include "dog.h"

/**
* _strdup - function that returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter.
* @str: string to copy
* Return: a pointer to the duplicated string, or NULL
*/

char *_strdup(char *str)
{
	int index;
	int c = 0;
	char *tab;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
	{
		c++;
	}

	tab = malloc(c + 1 * sizeof(char));

	if (tab == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < c; index++)
		{
		tab[index] = str[index];
		}
		return (tab);
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
	dog_t *newdog;

	newdog = malloc(sizeof(*newdog));

	if (newdog == NULL)
	{
		return (NULL);
	}

		newdog->name = _strdup(name);
		newdog->owner = _strdup(owner);

		if (newdog->name == NULL || newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog->owner);
			free(newdog);
		}

		newdog->age = age;

return (newdog);
}
