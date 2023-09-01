#include"main.h"
/**
 *
 * _isalpha - dislpay alpha
 *
 * @c: alpha check
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	char small, capital;
	int al = 0;

	{
		for (small = 'a'; small <= 'z'; small++)
		{
			for (capital = 'A'; capital <= 'Z'; capital++)
			{
				if (small == c || capital == c)
				{
					al = 1;
				}
			}
		}
	}
	return (al);
}
