#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "../include/test.h"


int my_puts(const char *s)
{
	char *newstr = malloc(strlen(s) + 2);
	strcpy(newstr, s);
	strcat(newstr, "\n");
	write(1, newstr, strlen(newstr));
	return 0;

}