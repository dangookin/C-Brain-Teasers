#include <stdio.h>

int main()
{
	int a;

	printf("Enter an integer: ");
	scanf("%d",&a);

	printf("%d\n",a<<1);
	printf("%d\n",a>>1);

	return(0);
}
