#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: return the product or error if argument provided is one
 */

int main(int argc, char *argv[])
{


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
