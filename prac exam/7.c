#include <stdio.h>

int main() {
    int num = 11;
    int rows;
    
    printf("Enter number of rows :");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}