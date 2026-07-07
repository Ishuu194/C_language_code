//take 3 input from user and print larger number from that

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3 Number: ");
	scanf("%d  %d %d",&a,&b,&c);
	
	if(a>b&&a>c)
	{
		printf("A is a Larger Number");
	}
	else if(b>c&&b>a)
	{
		printf("B is a Larger Number ");
	}
	else if(c>a&&c>b)
	{
		printf("C is a Larger Number ");
	}
	else
	{
		printf("Invalid Number");
	}
}
