#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter a positive integer: ");
	scanf("%d",&a);

	b = ~a + 1;

	printf("Result: %d\n",b);

	return(0);
}
