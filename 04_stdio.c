#include <stdio.h>

int main()
{
	char buffer[BUFSIZ]; 

	setbuf(stdout,buffer);

	puts("Wait for it!");
	puts("Wait for it!");
	puts("Now!");
	getchar();
	puts("Whew!");

	return(0);
}
