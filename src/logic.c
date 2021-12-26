#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

#define BOOL int

int max(int i, int j, int k) {
    int max = (i <  j) ? ((j < k) ?  k : j) : ((i > k) ? i : k);
    return max;
}

int main(void) {
    // int i = 420;
    // printf("%lu\n", sizeof(i));

    // unsigned long long d;
    // scanf("%llu",&d);
    // printf("%llu",d);
    // getch();

    /*
    printf("%d\n", max(4, 14, 9));

    int b = 9;
    if (b) {
        printf("true");
    } else {
        printf("false");
    }

    bool flag = true;
    if (flag) {
        printf("\n%d\n", flag);
    }

    int n = 4;
    switch (n) {
        case 4: case 3: case 2: {
            printf("%d\n", n);
            break;
        }
        default: 
            break;
    }
    */

    int n = 3;

    switch (n) {
        case 4: 
            printf("hi");
            break;
        default: 
            printf("bye"); 
    }

    int i;

    for (i = 0; i < 3; i++) {
        printf("%d\n", i);
    }

    printf("final : %d\n", i);

    // do {
        // printf("%d\n", i);
    // } while (i--);

    /* 
    float x = 1.2;
    while(x) {
        printf("x: %f\n", x);
        x -= 0.1;
    }
    */

    int j = 4;
    while (j--) {
        printf("j : %d\n", j);
    }

    while(1) {
        printf("fuck you\n");
    }

    return 0;
}
