#include<stdio.h>

int display(int n)
{
    if(n>0)
    {
        display(n-1);
        printf("%d ",n);
    }
    else
    {
        return;
    }
}

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    display(n);
}
