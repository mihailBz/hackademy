#include <stdio.h>
#include "../include/test.h"

int my_strcmp(char *s1, char *s2)
{
	int i;
	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return 0;
		}
	}
	return s1[i] - s2[i] < 0 ? -1 : 1;
}