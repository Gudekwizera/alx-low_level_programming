#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to make change for an amount of money;
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */
int main(int argc, char *argv[])
{
	int i, j, results = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2) 
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0 ; j++)
	{
		while (i >= coin[j])
		{
			i -= coin[j];
			results ++;
		}
	}
	printf("%d\n", results);
	return (0);
}
