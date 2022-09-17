#include "shell.h"

/**
 * varname_del- delete environment varible name
 * @dest: is the address of dest is the buffer
 * @src: is the address of the src
 * @len: the lenght of the env variable name
 * Return: the variable without its name
 */
char *varname_del(char *dest, char *src, int len)
{
	int index2;
	int index1 = 0;

	for (index2 = 0; src[index2] != '\0'; index2++)
	{
		if (index2 > len)
		{
			dest[index1] = src[index2];
			index1++;
		}
	}

	dest[index1++] = '\0';

	return (dest);


}
