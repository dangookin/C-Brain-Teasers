#include <stdio.h>

int main()
{
	int n,d,larger,smaller,diff;

	printf("Enter a fraction (nn/nn): ");
	scanf("%d/%d",&n,&d);

	printf("%d/%d = ",n,d);

	larger = n>d ? n : d;
	smaller = n<d ? n : d;
	diff = larger-smaller;

	while( diff!=larger)
	{
		larger = smaller>diff ? smaller : diff;
		smaller = smaller==larger ? diff : smaller;
		diff = larger-smaller;
	}

	if( diff>1 )
		printf("%d/%d\n",n/diff,d/diff);
	else
		printf("%d/%d\n",n,d);

	return(0);
}
