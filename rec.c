#include<stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else{
		return 1;
	}
}
int main()
{
	int n;
	printf("Enter Postive Integer: ");
	scanf("%d",&n);
	printf("The Factorial is %d=%d",n,fact(n));
}
