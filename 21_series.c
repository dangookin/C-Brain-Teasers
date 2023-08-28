#include <stdio.h>

int main()
{
    int f,n;
    int count;

    f = n = 1;
    count=0;
	while( count < 20 )
	{
        printf("%d ",f);
        f+=n;
        printf("%d ",n);
        n+=f;
        count+=2;
    }
	putchar('\n');

    return(0);
}
