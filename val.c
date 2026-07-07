//call by value
#include<stdio.h>
int display(int p,int q)
{
	printf("Before Updation p=%d\n",p);
	printf("Before Updation q=%d\n",q);
	
	p=p+1;
	q=q+1;
	
	printf("After Updation p=%d\n",p);
	printf("After Updation q=%d\n",q);
}
int main(){
	int a=4;
	int b=5;
	printf("Before function call a=%d\n",a);
	printf("Before function call b=%d\n",b);
	
	display(a,b);       //function call by a,b is value performing the recursion in this 
	
	printf("After function call a=%d\n",a);
	printf("After function call b=%d\n",b);	
}
