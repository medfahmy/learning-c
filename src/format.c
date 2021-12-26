#include <stdio.h>

int modulo(int a, int b) {
    int r = a % b;
    return (r >= 0 && r <= a) ? r : r + b;
}

int main(void) {
    // int i = 10, j = 20;
    // printf("%d %d \n", &i, &j);

    // float x = 300000.14;
    // printf("\"%10f\"\n\"%-10.1d\"\n", x, i);

    // char *s = "hello world";
    // printf("%s\n", s);

    // int i;
    // p = &i;
    // printf("enter i: \n");
    // scanf("%d", &i);

    // printf("i is %d\n", i);

    // printf("%d, %d\n", i);

    // printf("%d\n", i, j);

    // int x;
    // x = 2 == 2 ? 2 : 1;
    // printf("x : %d\n", x);

    int i;
    // i = modulo(-24, 13);
    i = -24 % 13;
    // printf("%d\n", i);

    // -i = 9;

    int a, b, c;
    a = 5;
    c = (b = a + 2) - (a = 1);
    // printf("%d\n", c);

    i = 2;
    int j = i++;
    printf("%d\n", j);
}
