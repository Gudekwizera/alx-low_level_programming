#include <stdio.h>

/**
 * main - program to count number of arguments passed to program
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc-1);
	return (0);
}
