#include <stdio.h>
#include <stdlib.h>
#include "../include/test.h"

char* my_itoa(int nmb)
{
	char * res = malloc(8*sizeof(int));
	sprintf(res, "%d", nmb);
	return res;
}