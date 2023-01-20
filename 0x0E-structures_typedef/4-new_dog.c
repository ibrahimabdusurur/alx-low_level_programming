#include "dog.h"
#include <stdlib.h>

char *_strcp(char *dest, char *str);
int _strlen(char *str);
dog_t *new_dog(char *name, float age, char *owner);

/**
  * _strcp - copies a string to a new buffer.
  * @str: pointer to the string which is to be copied.
  * @dest: pointer to the buffer that the string to be copied to.
  *
  * Return: pointer to the new string.
  */
char *_strcp(char *dest, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];

	dest[i] = '\0';

	return (dest);
}

/**
  * _strlen - calculates length of a string passed to the function.
  * @str: the string passed to the function.
  *
  * Return: length of str.
  */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
  * new_dog - creates a new dog.
  * @name: the name passed to the new dog.
  * @age: the age passed to the new dog.
  * @owner: the owner's name passed to the new dog.
  *
  * Return: pointer to new dog type.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(dog_t) * (_strlen(name) + 1));

	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(sizeof(dog_t) * (_strlen(owner) + 1));

	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}

	n_dog->name = _strcp(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = _strcp(n_dog->owner, owner);

	return (n_dog);
}
