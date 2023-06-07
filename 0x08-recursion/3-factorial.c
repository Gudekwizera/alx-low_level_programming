#include "main.h"

/**
 * factorial - find factorial of any number;
 * @n: int type
 * Return: success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
