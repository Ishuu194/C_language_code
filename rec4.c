#include<stdio.h>
int display(int n){
    if(n>0)
    {
        printf("%d ",n);
        display(n-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    display(n);
}
