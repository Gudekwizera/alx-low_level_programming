#include "main.h"

/**
 * _print_rev_recursion - recursion function to print string in reverse
 * @s: pointer of char type to input string
 * description: print a string in reverse without using loops
 *
 * Return: Always success
 */


void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
		

}
