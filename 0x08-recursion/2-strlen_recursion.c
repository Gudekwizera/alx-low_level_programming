#include "main.h"

/**
 * _strlen_recursion - print the length of string
 *
 * @s: pointer to string to calculate it's length
 * Return: success
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0)i;
	}
	else 
	{
		count = 1;
		return (count + _strlen_recursion(s + 1));
	}
}
