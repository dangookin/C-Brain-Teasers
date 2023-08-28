#include <stdio.h>

int main()
{
	float n,p;

	n = -0.0;
	p = +0.0;

	if( n==p )
		printf("negative zero is equal to positive zero\n");
	else
		printf("negative zero is not equal to positive zero\n");

	return(0);
}
