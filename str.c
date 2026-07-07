//gets 
//puts  string

#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter string :");
//	scanf("%s ",&str);
    gets(str);
	
	printf("String=");
	puts(str);
	
	int len=strlen(str);
	printf("\nLength=%d ",len);
	
	printf("\nUpper case=%s",strupr(str));
	
	printf("\nLower case=%s ",strlwr(str));
	
	printf("\nReverse =%s",strrev(str));
	
	
	

	
}
