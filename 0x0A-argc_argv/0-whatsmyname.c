#include <stdio.h>

/**
 * main - program to print name of program
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */
int main(int argc, char **argv)
{
	printf("%s\n", *argv);
}
