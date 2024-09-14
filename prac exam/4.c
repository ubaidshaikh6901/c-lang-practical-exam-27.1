#include <stdio.h>

void cube(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * *(arr + i) * *(arr + i);
    }
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

    cube(arr, size);

    printf("Array with cube of each element: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}