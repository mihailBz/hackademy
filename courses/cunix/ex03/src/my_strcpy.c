#include <stdio.h>
#include "../include/test.h"

char *my_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	dest[i] = src[i];

	while (dest[i] != '\0')
	{
		dest[i+1] = src[i+1];
		i++;
	}
	return dest;
}