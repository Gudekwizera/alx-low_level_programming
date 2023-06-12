#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	x = malloc((size) * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	x[i] = '\0';
	return (x);
}
