#include<stdio.h>
int main()
{
    int Grade;
	printf("Enter Grade  :");
	scanf("%C",&Grade);
	
	switch(Grade){
		case 'A':
		printf("Excellent");
		break;
			
		case 'B':
		printf("Very Good");	
		break;
		
		case 'C':
		printf("Good");
		break;
		
		case 'F':
		printf("Fail");
		break;
		
		default:
		   printf("Invalid Grade");
		
	}	
}
