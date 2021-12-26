#include <stdio.h>
#include <stdlib.h>

void sq_table() {
    int n;

    printf("\n");
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);
    printf("%10s\t%10s\n", "number", "square");

    for (int i = 1; i <= n; i++) {
        printf("%10d\t%10d\n", i, i * i);
    }
}

void odd_sq_table() {
    int i, n, odd, square;

    printf("\n");
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);
    printf("%10s\t%10s\n", "number", "square");

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2) {
        printf("%10d\t%10d\n", i, square);
        ++i;
        square += odd;
    }
}

int is_prime(int n) {
    if (n < -1) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void print_primes(int n) {
    if (n < -1) {
        return;
    }

    for (int i = 2; i < n; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    // odd_sq_table();
    if (-1) {
        printf("ho");
    }

    return 0;
}
