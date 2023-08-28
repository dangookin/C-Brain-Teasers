#include <stdio.h>

double babylonian(double r)
{
	double low,high;
	int x;
	const int precision = 7;

	low = 1.0;
	high = r;
	for( x=0; x<precision; x++ )
	{
		high = (high+low)/2.0;
		low = r/high;
	}
	return(low);
}

int main()
{
	double pv,sr;

	printf("Enter a positive value: ");
	scanf("%lf",&pv);
	if( pv <= 0 )
		return(1);
	sr = babylonian(pv);
	printf("The result is %f\n",sr);

	return(0);
}
