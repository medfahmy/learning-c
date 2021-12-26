#include <stdio.h>

void ex1() {
    int i = 1;
    while (i <= 128) {
        printf("%d\n", i);
        i *= 2;
    }
}

void ex1_for() {
    for (int i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }
}

void ex2() {
    int i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i);
}

void ex3() {
    int i, j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
}

void ex5() {
    int i;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 0;
    for (; i < 10;) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);
    printf("\n");
}

void ex8() {
    int rep;
    for (int i = 10; i >= 1; i /= 2) {
        printf("%d ", i++);
        if (i == rep) {
            break;
        }
        rep = i;
    }
}

void ex11() {
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2) {
            continue;
        }
        sum += i;
    }

    printf("%d\n", sum);
}

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    int d;
    for (d = 2; d < n && d*d <= n; d++) {
        if (n % d == 0) {
            return 0;
        }
    }
    return 1;
}

void ex13(int* n, int* m) {
    for (*n = 0; *m > 0; (*n)++, *m /= 2)
        continue;
}

void prj1() {
    float max, input;
    for (;;) {
        printf("enter a number: ");
        scanf("%f", &input);
        if (input <= 0) {
            break;
        } else if (max < input) {
            max = input;
        }
    }

    printf("the largest number entered is: %.2f\n", max);
}

int main() {
    // ex2();

    /*
    int i = 3;
    do {
        printf("%d ", i);
    } while (--i);
    */

    // ex3();

    // for (int i = 0; i < 10; i++)
        // printf("%d ", i);
    // for (int i = 0; i++ < 10;)
        // printf("%d ", i);

    // for (int i = 0; i < 10000; i++) {
        // if (is_prime(i)) {
            // printf("%d\n", i);
        // }
    // }

    /*
    int n, m;
    m = 20;

    ex13(&n, &m);
    printf("%d, %d\n", n, m);
    */

    /*
    int* p;
    *p = 100;
    printf("%d", p);
    */

    prj1();

    return 0;
}
