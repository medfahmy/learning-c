#include <stdio.h>
#include <math.h>

int sum(int n) {
    int s = 0;
    do { 
        s += n;
    } while (n--);

    return s;
}

int sum_for(int n) {
    int i, sum;
    // comma expr
    for (sum = 0, i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int count_digits(int n) {
    if (n < 0) {
        return -1;
    }

    int i = 0;
    do {
        n /= 10;
        i++;
    } while (n);

    return i;
}

int get_sum(int n) {
    if (n < 0) {
        return -1;
    }

    int sum = 0;
    int i = count_digits(n);
    while (n) {
        // printf("%d, %d\n", n % 10, i);
        sum += pow((n % 10), i);
        n /= 10;
        i--;
    }

    return sum;
}

int main(void) {
    /*
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("n: %d, sum: %d\n", n, sum(n));
    */

    // printf("%d\n", count_digits(11110));

    printf("%d\n", sum_for(100));


    /*
       for (;;) {
        printf("lol");
    }
    */

    /*
    int i = 1000;
    while (i--) {
    if (i == get_sum(i)) {
        printf("%d\n", i);
        }
    };
    */

    // int sum = get_sum(123);
    // printf("%d\n", sum);
}
