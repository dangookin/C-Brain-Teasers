#include <stdio.h>

long result(long v)
{
	if( v>1 )
		return(v*result(v-1));
	return(v);
}

int main()
{
	long a,r;

	printf("Enter a positive integer: ");
	scanf("%ld",&a);

	r = result(a);
	printf("The result is %ld\n",r);

	return(0);
}
