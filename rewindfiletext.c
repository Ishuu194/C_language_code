#include<stdio.h>
int main()
{
	FILE *in;
	char data[100];
	
	in=fopen("fortune.txt","r");
	
	while(fscanf(in,"%s",data)!=EOF)
	{
		printf("%s ",data);
	}
	
	rewind(in);           //used to print statement repetadly
	while(fscanf(in,"%s",data)!=EOF)
	{
		printf("\n%s ",data);
	}
	
	fclose(in);
}

