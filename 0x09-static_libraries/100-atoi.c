#include "main.h"
#include<stdio.h>
/**
 * _atoi - convert integer to string
 * @s: the string
 * Return: string values
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int un = 0;
	int min = 1;
	int si = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			si = 1;
		un = (un * 10) + (s[c] - '0');
		c++;
		}
	if (si == 1)
	{
		break;
	}
	c++;
	}
	un *= min;
	return (un);
}
