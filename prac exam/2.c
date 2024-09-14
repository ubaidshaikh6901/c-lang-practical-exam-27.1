#include <stdio.h>

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

    int sum = sum_array(arr, size);

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}