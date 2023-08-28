#include <stdio.h>

float p(float a,float b)
{
	return((b<100.0)?a+(b*b/p(a+2.0,b+1.0)):b*b);
}

int main()
{
	printf("%.7f\n",4.0/p(1.0,1.0));
	return(0);
}

