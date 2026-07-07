#include<stdio.h>
int main()
{
	int age;
	printf("Enter age :");
	scanf("%d",&age);
	
	if(age==15)
	{
		printf("You are applicable for SSC");
	}
	else if(age==18)
	{
		printf("You are applicable for HSC");
	}
	else if(age==21)
	{
		printf("You are applicable for Degree");
	}
	else if(age==22)
	{
		printf("You are applicable to join Fortune Cloud");
	}	
	else
	{
		printf("Go and do Study");
	}
}







