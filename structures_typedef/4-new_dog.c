#include "dog.h"

/**
* _strlen - function that returns the length of a string
* @s: string to get length
* Return: length of the string
*/

int _strlen(char *s)
{
	int num_char;

	num_char = 0;

	while (s[num_char] != '\0')
	{
		num_char++;
	}
	return (num_char);
}

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
	int index;

	for (num_char = 0; src[num_char] != '\0'; num_char++)
	{
	}
	for (index = 0; index < num_char; index++)
	{
		dest[index] = src[index];
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
	int length_name, length_owner;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	length_name = _strlen(name);
	length_owner = _strlen(owner);

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (length_name + 1));
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}
		_strcpy(newdog->name, name);

	newdog->owner = malloc(sizeof(char) * (length_owner + 1));
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
	_strcpy(newdog->owner, owner);
	newdog->age = age;

return (newdog);
}
