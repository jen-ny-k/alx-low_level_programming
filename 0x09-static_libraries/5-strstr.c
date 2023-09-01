#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 * _strstr - locates a substring
 * @haystack: first substring
 * @needle: the substring
 * Return: return haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);
	int i, j;

	if (needle_len > haystack_len)
	{
		return (haystack);
	}
	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (haystack);
		}
	}
	return ('\0');
}
