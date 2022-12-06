#include "main.h"
#include <string.h>

/**
 * *_strstr - locates a substring
 * @haystack: string parameter
 * @needle: substring parameter
 * Return: to the beginning of located substring or null based on a condition
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
			y++;
		}
		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
		x++;
	}
	return ('\0');
}
