//swapping
#include<stdio.h>
int main()
{
	int Red=10;
	int Green=20;
	int empty;
	
	empty=Red;
	Red=Green;
	Green=empty;
	
	printf("Red=%d  Green=%d",Red,Green);
}
