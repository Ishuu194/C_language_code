#include<stdio.h>
int sum(int n)
{
	if(n>0)
	{
		return n+sum(n-1);
	}
	else{
		return 0;
	}
}
int main()
{
	int n;
	printf("Enter The Number: ");
	scanf("%d",&n);
	printf("The Sum of Number is %d=%d",n,sum(n));
}


