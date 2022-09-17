#include "shell.h"
/**
 *  _strcmp- compares two stings
 * @s1: the pointer of the first string
 * @s2: the pointer  of the second string
 * Return: 0 if same, >0 if first is greater and <0 if second is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
