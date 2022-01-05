#include <stdio.h>

void phone_number() {
    long unsigned n = 0;
    int a;

    char ch;

    printf("enter a phone phrase: ");

    while ((ch = getchar()) != '\n') {
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            a = 2;
        } else if (ch == 'D' || ch == 'E' || ch == 'F') {
            a = 3;
        } else if (ch == 'G' || ch == 'H' || ch == 'I') {
            a = 4;
        } else if (ch == 'J' || ch == 'K' || ch == 'L') {
            a = 5;
        } else if (ch == 'M' || ch == 'N' || ch == 'O') {
            a = 6;
        } else if (ch == 'P' || ch == 'R' || ch == 'S') {
            a = 7;
        } else if (ch == 'T' || ch == 'U' || ch == 'V') {
            a = 8;
        } else if (ch == 'W' || ch == 'X' || ch == 'Y') {
            a = 9;
        } else {
            a = ch;
        }

        n = n * 10 + a;
        printf("%d, %lu\n", a, n);
    }

    printf("%lu\n", n);
} 

int square2() {
    int i, n;
    /* int counter = 0; */

    // printf("start: ");
    // scanf("%d", &n);
    printf("enter a number: ");
    scanf("%d", &n);
    getchar();

    printf("%10s%20s\n", "number", "square");

    /* if (n > m) { */
    /*     printf("start must be less than end"); */
    /*     return 1; */
    /* } */

    for (i = 0; i <= n; i++) {
        printf("%10d%20d\n", i, i * i);
        /* counter++; */

        if (i % 24 == 0) {
            printf("press enter to continue");

            // while (getchar() != '\n');
            getchar();
        }

        /*
        if (counter == 24) {
            printf("press enter to continue");

            while (getchar() != '\n');
            counter = 0;
        }
        */
    }

    return 0;
}

int neg_square() {
    for (int i = 0; i <= 1000000000; i++) {
        if (i * i < 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    // int i = -10;
    // unsigned u = 10;

    // int b = i < u;
    // printf("%d\n", b);

    /*
    char ch = '\xdb';
    float f = 3.1E+5;
    
    printf("%c\n", ch);
    printf("%f\n", f);
    */

    /*
    int n;
    n = neg_square();
    printf("%d\n", n);

    int d;
    d = 750000;
    printf("%d\n", d * d);
    printf("%d\n", d * d < 0);
    */

    /*
    short s;
    int i;
    long l;

    printf("%zu\n", sizeof s);
    printf("%zu\n", sizeof i);
    printf("%zu\n", sizeof l);
    */

    // int n = 3000000000;
    // printf("%d\n", n);

    // square2();

    phone_number();

    return 0;
}
