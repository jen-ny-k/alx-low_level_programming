#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/* main - This is where he program starts
 *
 * Return: returns zero if successful
 **/
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	if (n == 0)
		printf("Lst digit of %d is %d and is zero\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than six and not equal to zero\n", n, m);	
	return (0);
}
