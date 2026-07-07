#include<stdio.h>

int main()
{
	FILE *ab;
	char c;
	ab=fopen("Data.txt","r");
	
	while((c=fgetc(ab))!=EOF)/// double condition that why we using double braket
	{
		printf("%c",c);
	}
	fclose(ab);
}

