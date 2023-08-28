#include <stdio.h>

int main()
{
	char a;


	for( a='A'; a<='Z'; a++ )
		putchar( a | 0x20 );
	putchar('\n');

	for( a='a'; a<='z'; a++ )
		putchar( a & 0xdf );
	putchar('\n');

	return(0);
}
