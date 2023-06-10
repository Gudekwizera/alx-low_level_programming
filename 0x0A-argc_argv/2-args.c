#include "stdio.h"
/**
 * main - program to print out the arguments it receives
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
