#include "holberton.h"

/**
  * reset_to_98 - Updates the value it points to 98
  * @n: pointer to n
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
