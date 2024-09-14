#include <stdio.h>

int main() {
    int choice;
    int num1, num2;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (between 1 to 4): ");
    scanf("%d", &choice);

    printf("Enter the first numbers: ");
    scanf("%d", &num1);
    
    printf("Enter the secound number: ");
    scanf("%d", &num2);

    switch (choice) {
        case 1:
            printf("%.d + %d = %d\n", num1, num2,num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %d / %d = %.2f\n", (float)(num1), (float)(num2), (float)(num1/num2));
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}