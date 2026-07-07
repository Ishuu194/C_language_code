#include<stdio.h>
int main()
{
    int Result;
	printf("Enter Result  :");
	scanf("%C",&Result);
	
	switch(Result){
		case 'P':
		printf("Pass ");
		break;
			
		case 'F':
		printf("Fail ");	
		break;
		
		default:
		   printf("Invalid Result");
		
	}	
}
