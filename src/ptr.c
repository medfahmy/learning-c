#include <stdio.h>

int main(void) {
    int arr[] = { 1, 2, 3 };
    // int x = (&(*(arr + 1)))[0];
    int x = (arr + 1)[0];
    int* y = &(arr + 1)[0];
    // int *x = arr;

    printf("%d, %d\n", x, *y);
}
