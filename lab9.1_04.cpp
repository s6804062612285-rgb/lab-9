#include <stdio.h>

void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {
    int a = 1, b = 2, c = 3;
    printf("Before swap: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swap : a=%d, b=%d, c=%d\n\n", a, b, c);

    int arr1[3] = {10, 20, 30};
    int arr2[3] = {44, 55, 66};
    int i;

    printf("Before swap array:\n");
    printf("array1: %d %d %d\n", arr1[0], arr1[1], arr1[2]);
    printf("array2: %d %d %d\n", arr2[0], arr2[1], arr2[2]);

    swapArray(arr1, arr2, 3);

    printf("After swap array:\n");
    printf("array1: %d %d %d\n", arr1[0], arr1[1], arr1[2]);
    printf("array2: %d %d %d\n", arr2[0], arr2[1], arr2[2]);

    return 0;
}

void swapValue(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void swapArray(int a[], int b[], int size) {
    int i, temp;
    for (i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}