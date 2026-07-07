#include<stdio.h>
union emp
{
	int id;
	char name[10];
}e1 ;
int main()
{
	int id;
	char name[10];
	printf("Enter id:");
	scanf("%d",&id);
	
	printf("Enter Name :");
	scanf("%s",&name);

	e1.id=id;
	strcpy(e1.name,name);
	
	printf("Id=%d",e1.id);
	printf("\nName=%s",e1.name);
	
}
