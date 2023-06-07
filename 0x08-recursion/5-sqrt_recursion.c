#include "main.h"

/**
 * if_natural_square - check if number has natural square root;
 * @x: int type
 * @y: int type
 * Return: return success
 */
int if_natural_square(int x, int y)
{
	if (x == (y * y))
		return (y);
	if (y  * y  >  x)
		return (-1);
	return (if_natural_square(x, y + 1));
}

/**
 * _sqrt_recursion - check if number has natural sqrt
 * @n: int type
 * Return: return success
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n  < 1)
		return (-1);
	return (if_natural_square(n, 1));
}
