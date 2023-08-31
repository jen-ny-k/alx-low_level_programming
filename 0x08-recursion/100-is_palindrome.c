#include "main.h"
/**
 * strlen_recursion - get string length
 * @s: string
 * Return: lenght of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + strlen_recursion(s + 1));
}
/**
 * comp_str - check palidrome
 * @s: the string
 * @left: left side
 * @right: right side
 * Return: palindrome
 */
int comp_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + comp_str(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - return palindrome
 * @s: the string
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp_str(s, 0, strlen_recursion(s) - 1));
}
