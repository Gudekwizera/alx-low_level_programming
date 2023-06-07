#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number;
 * @n: int type
 * Return: return 1 if prime number and 0 if else
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	return (check_prime(2, n));
}

/**
 * check_prime - check if number is prime number;
 * @x: int type
 * @y: int type
 * Return: return success
 */
int check_prime(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
		return (check_prime(y + 1, x));
}
