#include <stdio.h>
int main() {
    int a , b;
    printf("Enter 1st Number  :");
    scanf("%d",&a);
    printf("Enter 2nd Number  :");
    scanf("%d",&b);

    if (a>=b)
    {
        printf("%d is Larger",a);
    }
    else{
        printf("%d is Smaller",b);
    }

}
