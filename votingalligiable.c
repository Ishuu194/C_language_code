#include<stdio.h>
int main(){
	int a;
	printf("Enter age:");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("Alligible for Voting");
	}
	else
	{
		printf("Not Alligible for Voting ");
	}
}
