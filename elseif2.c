#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age: ");
	scanf("%d",&age);
	
    if(age<0)
    {
    	printf("Invalid age");
	}
	else if(age>=18)
	{
		printf("You are alligible for Voting");
	}
	else
	{
		printf("You are not alligible for Voting");
	}
}
