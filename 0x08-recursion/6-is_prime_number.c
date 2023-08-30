#include "main.h"
#include <stdio.h>
/**
 * prime_a - calculate if number is a prime number
 * @a: input
 * @b: divisor
 * Return: 0
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else
		return (prime_a(a, b + 1));
}
/**
 * is_prime_number - check for prime numbers
 * @n: number
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
