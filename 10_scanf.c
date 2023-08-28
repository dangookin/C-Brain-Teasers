#include <stdio.h>

int main()
{
	char buffer[32];

	printf("Type something: ");
	scanf("%[ABC]",buffer);
	printf("You typed: %s\n",buffer);

	return(0);
}
