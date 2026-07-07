#include<stdio.h>
int main()
{
	int Marks;
	printf("Enter the Marks : ");
	scanf("%d",&Marks);

    if(Marks>=90){
    	printf("A Grade ");
	}	
	else if(Marks>=75){
		printf("B Grade ");
	}
	else if(Marks>=50){
		printf("C Grade ");
	}
	else{
		printf("Invalid Marks");
	}
}

