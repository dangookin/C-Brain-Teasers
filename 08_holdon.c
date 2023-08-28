#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int array[5];
	int x;

	srand( (unsigned)time(NULL) );

	for( x=0; x<12; x++ )
	{
		array[x] = rand() % 100;
		printf(" %d",array[x]);
	}
	putchar('\n');

	return(0);
}
