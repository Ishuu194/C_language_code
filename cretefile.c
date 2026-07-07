#include<stdio.h>
int main()
{
	FILE *in;
	in=fopen("fortune.txt","w");
	fprintf(in,"Hello this is rainy season");
	
	fclose(in);
}
