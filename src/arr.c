#include <stdio.h>
#include <stdbool.h>

#define N 10

unsigned long length(int * a) {
    return (sizeof a / sizeof a[0]);
}

void reverse_numbers() {
    int a[N];

    printf("enter %d numbers: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("in reverse order:");

    for (int i = N - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }

    printf("\n");
}

void check_for_rep() {
    long n;
    int digit;
    bool digit_seen[10] = {false};

    printf("enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit_seen[digit]) {
            printf("Repeated digit\n");
            return;
        } else {
            digit_seen[digit] = true;
        }

        n /= 10;
    }

    printf("No repeated digit\n");
}

int main() {
    int a[N];
    printf("%zu\n", length(a));

    // printf("%d\n", typeof(a));

    /* int i = 0; */

    /* while (++i < N) { */
    /*     printf("%d\n", i); */
    /* } */

    /* do { */
    /*     a[i] = i; */
    /* } */
    /* while (++i < N); */

    /* for (i = 0; i < N; i++) { */
    /*     a[i] = i; */
    /* } */

    /* for (int i = 0; i < N; i++) { */
    /*     printf("%d, %d\n", i, a[i]); */
    /* } */

    /* reverse_numbers(); */

    /* check_for_rep(); */
    
    return 0;
}
