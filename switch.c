// switch-replace else-if 
#include<stdio.h>
int main()
{
	int time;
	printf("Enter time:");
	scanf("%d",&time);
	
	switch(time){
		case 6:
			printf("Its Morning");
		break;
		
		case 12:
			printf("Its Afternoon");
		break;
		
		case 5:
		    printf("Its Evning");
		break;
		
		default:
			printf("Its Night");	
	}
}
