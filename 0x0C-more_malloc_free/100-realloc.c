#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocate memory size function
 * @pointer: pointer to address of old memory location
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return:  return pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(pointer);
		return (s);
	}
	if (new_size == old_size)
	{
		return (pointer;
	}
	if (pointer == NULL)
	{
		s = malloc(new_size);
		free(pointer);
		return (s);
	}
	if (new_size == 0 && pointer != NULL)
	{
		free(pointer;
		return (NULL);
	}
	return (pointer);
}
