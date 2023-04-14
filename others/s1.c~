#include <stdio.h>

void main() 
{
	int x;
	FILE *ifp = fopen("input.txt","r");

	FILE *ofp = fopen("output.txt","w");

	fscanf(ifp, "%d", &x);
	x = x*3;
	fprintf(ofp, "%d", x);
	fclose(ofp);
	fclose(ifp);
}

