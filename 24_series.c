#include <stdio.h>

int main()
{
	const int limit = 1000000;
	int x;
	float t;

	/* divergent */
	t = 0.0;
	for(x=1; x<=limit; x++ )
		t += 1.0 / (float)x;
	printf("Divergent: %.4f\n",t);

	/* convergent */
	t = 0.0;
	for(x=1; x<=limit; x*=2 )
		t += 1.0 / (float)x;
	printf("Convergent: %.4f\n",t);

	return(0);
}
