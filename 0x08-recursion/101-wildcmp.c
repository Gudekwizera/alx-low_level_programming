#include "main.h"

/**
 * wildcmp - compare if strings are identical
 * @s1: point to string 1.
 * @s2: point to string 2.contain special character '*'
 * Return: returns 1 if identical, else 0 
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s2 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}

