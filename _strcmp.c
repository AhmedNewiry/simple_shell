#include "shell.h"

/**
 * _strncmp- compares two stings
 * @s1: the pointer of the first string
 * @s2: the pointer  of the second string
 * @length: number of characters to be compared
 * Return: 0 if same, >0 if first is greater and <0 if second is greater
 */

int _strncmp(char *s1, char *s2, size_t length)
{
	size_t i = 0;

	while (s1[i] && s2[i] && i <= length)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i]  - s2[i]);
		}
		i++;
	}
	if (i == length && s2[i] == 61)
	{
		return (0);
	}
}
