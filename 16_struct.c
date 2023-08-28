#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct raw { int value; char string[32]; };
	FILE *outfile;
	struct raw *data;

	/* allocate and fill the structure */
	data = malloc( sizeof(struct raw) );
	data->value = 60;
	strcpy( data->string,"This is a string\n" );

	/* open a file and save the data */
	outfile = fopen("data.dat","w");
	if( outfile==NULL )
		exit(1);
	fwrite(&data,sizeof(data),1,outfile);
	fclose(outfile);
	puts("File written");
	
	/* clean up */
	free(data);
	return(0);
}
