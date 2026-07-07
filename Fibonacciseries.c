#include <stdio.h>

int main()
{
    int a, b, c;
    int i;
    printf("Enter A value: ");
    scanf("%d", &a);
    printf("Enter B value: ");
    scanf("%d", &b);

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}
