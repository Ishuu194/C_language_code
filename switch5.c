#include <stdio.h>

int main() {
    int role;

    printf("Login Roles\n");
    printf("1. Admin\n");
    printf("2. Teacher\n");
    printf("3. Student\n");
    printf("4. Guest\n");

    printf("Enter your role number: ");
    scanf("%d", &role);

    switch(role) {
        case 1:
        printf("Welcome Admin ");
        break;

        case 2:
        printf("Welcome Teacher ");
        break;

        case 3:
        printf("Welcome Student ");
        break;

        case 4:
        printf("Welcome Guest ");
        break;

        default:
        printf("Invalid Role Number ");
    }
}
