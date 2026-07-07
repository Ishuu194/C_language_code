#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}
