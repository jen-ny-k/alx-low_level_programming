#include"main.h"
/**
 * _abs - compute absolute value
 *
 * @r: value
 * Description: Library is a standard library
 *
 * Return: return (0)
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r = r * -1);
	}
}
