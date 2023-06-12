#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */

char *_strdup(char *str)
{
	char *pointer;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	pointer = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
	{
		if (pointer == NULL)
		{
			return (NULL);
	}
		pointer[i] = str[i];
		i++;
	}
	return (pointer);
}
