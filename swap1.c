// Swapping using function
#include <stdio.h>

int swap(int *Red, int *Green)
{
    int empty;

    empty = *Red;
    *Red = *Green;
    *Green = empty;
}
int main()
{
    int Red = 30;
    int Green =40;

    printf("Before Swapping:\n");
    printf("Red = %d  Green = %d\n", Red, Green);

    swap(&Red, &Green);

    printf("After Swapping:\n");
    printf("Red = %d  Green = %d\n", Red, Green);
}
