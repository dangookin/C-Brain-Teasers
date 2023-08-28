#include <stdio.h>

#define SIZE 5

int main()
{
	int values[SIZE] = {2, 3, 5, 8, 13};
	int *v,x;

	/* initialize the pointer */
	v = values;

	for( x=0; x<SIZE; x++ )
	{
		printf("%2d = %2d\n",
				values[x],
				*(v+x)
			  );
	}

	return(0);
}
