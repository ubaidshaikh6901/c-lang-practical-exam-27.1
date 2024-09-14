#include <stdio.h>

void print_reverse(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    
    for (int i = 0; i < size; i++) {
        printf("Enter [%d]: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    print_reverse(arr, size);

    int sum = sum_array(arr, size);
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}