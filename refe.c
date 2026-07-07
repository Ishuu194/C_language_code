#include<stdio.h>
int display(int *p,int *q)
{
	printf("\nBefore updation p=%d",*p);
	printf("\nBefore updation q=%d",*q);
	
	*p=*p+1;
	*q=*q+1;
	
	printf("\nAfter updation p=%d",*p);
	printf("\nAfter updation q=%d",*q);
}
int main(){
	int a=4;
	int b=5;
	printf("Before function call a=%d",a);
	printf("\nBefore function call b=%d",b);
	
	display(&a,&b);       //function call by a,b is refernce  performing the recursion in this 
	
	printf("\nAfter function call a=%d",a);
	printf("\nAafter function call b=%d",b);	
}
