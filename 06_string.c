#include <stdio.h>

int main()
{
	char filename[] = "update.txt";
	char name[16];
	int x;

	/* oddly initialize the name[] buffer */
	for( x=0; x<16; x++ )
		name[x] = '.';

	/* extract first part of the filename */
	x = 0;
	while( filename[x] != '.' )
	{
		name[x] = filename[x];
		x++;
	}

	/* output result */
	printf("Extracted name '%s' from '%s'\n",
			name,
			filename
		  );

	return(0);
}
