#include "main.h"
#include<stdio.h>
/**
 * _puts - prints a string and a new line
 *
 * @str: The string to print
 *
 * Return: doesnot have a return
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
