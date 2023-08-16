#include"main.h"
/**
 * _islower - checks lowers case of character
 *
 * Return: 1 if character is lowercase otherwise 0
 */
int _islower(int c)
{
	char k;
	int small = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
		{
			small = 1;
		}
	}

	return (small);

}

