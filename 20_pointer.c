#include <stdio.h>

void modify(char *c)
{
	*(c+1) = 'o';
}

int main()
{
	char *string = "cat";

	printf("Before: %s\n",string);
	modify(string);
	printf("After: %s\n",string);

	return(0);
}
