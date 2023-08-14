#include <stdio.h>
/**
 * main - program must have a main function
 *
 * Return: always return zero
 */
int main(void)
{
  int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) 
    {
      
      if (digits[i] != digits[j])
      {
        
        putchar(digits[i] + '0');
        putchar(',');
        putchar(' ');
        putchar(digits[j] + '0');
      }
    }
  }

  return 0;
}
