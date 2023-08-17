#include "main.h"
/**
 *_isupper - check for upperase character
 *@c: character to be checked
 *Return: return 1 for upperchase character and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
