#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * main - my main file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *g;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			g = argv[i];
			for (k = 0; k < strlen(g); k++)
			{
				if (g[k] < 48 || g[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(g);
			g++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
		return (0);
}
