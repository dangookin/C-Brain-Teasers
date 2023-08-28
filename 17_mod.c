#include <stdio.h>

int main()
{
	int m = 1;

	while( m<10 )
	{
		if( 2%m )
			printf("%d - Odd\n",m);
		else
			printf("%d - Even\n",m);
		m++;
	}

	return(0);
}
