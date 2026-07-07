#include<stdio.h>
int main()
{
	int i;
	printf("Enter the Number : ");
	scanf("%d",&i);
	
    if(i>=0)
    {
    	printf("Number is Postive");
	}
	else if(i<=0)
	{
		printf("Number is Negative");
	}
	else
	{
		printf("Zero");
	}
}
