#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = ; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}
