#include "main.h"
#include <stdio.h>
/**
 * rev_string - function to reverse a string
 *
 * @s: the string to reverse
 * Return: no return
 */
void rev_string(char *s)
{
	int len = 0, pos = 0;
	char tmp;

	while (s[pos++])
		len++;
	for (pos = len - 1; pos >= len / 2; pos--)
	{
		tmp = s[pos];
		s[pos] = s[len - pos - 1];
		s[len - pos - 1] = tmp;
	}
}
