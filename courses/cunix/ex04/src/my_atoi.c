#include <stdio.h>
#include "../include/test.h"

int my_atoi(const char *nptr)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (*nptr == '-')
	{
		sign = -1;
		i++;
	}

	for (; nptr[i] != '\0'; ++i)
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			res = res * 10 + nptr[i] - '0';
		} else
		{
			return sign * res;
		}
		
	}

	return sign * res;
}