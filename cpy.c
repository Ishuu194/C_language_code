#include<stdio.h>
int main()
{
	char str1[100]="Ishwari";
	char str2[20];

	strcpy(str2, str1);
	printf("Copied String is = %s",str2);
}
