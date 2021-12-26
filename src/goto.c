#include <stdio.h>

void cont() {
    int n, d;

    printf("enter a number: ");
    scanf("%d", &n);

    for (d = 2; d < n && n % d != 0; d++)
        goto loop_end;
        loop_end: ;

    // d = 2;
    // while (d < n && n % d != 0) {
        // d++;
    // }

    if (d < n) {
        printf("%d is divisible by %d\n", n, d);
    } else {
        printf("%d is prime\n", n);
    }
}

void goat() {
    int n, d;

    printf("enter a number: ");
    scanf("%d", &n);

    /*
    for (d = 2; d < n; d++) {
        if (n % d == 0) {
            // break;
            goto done;
        }
    }
    */

    for (d = 2; d < n && n % d != 0; d++)
        continue;

    // done:
    if (d < n) {
        printf("%d is divisible by %d\n", n, d);
    } else {
        printf("%d is prime\n", n);
    }
}

int main() {
    /*
    int d, n = 11;
    for (d = 2; d < n && n % d != 0; d++)
        continue;
    printf("%d ", d);
    */

    cont();

    return 0;
}
