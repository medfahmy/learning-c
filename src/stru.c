#include <stdio.h>

struct Point {
    int x, y;
};

struct Person {
    char name[50];
    int age;
};

static int max(int x, int y, int z) {
    return (x > y && x > z) ? x : ((y > z) ? y : z);
}

int main() {
    struct Point p = {0, 1};

    struct Person john = { "john doe", 27 } ;

    printf("x: %d, y: %d\n", p.x, p.y);
    printf("name: %s, age: %d\n", john.name, john.age);

    printf("max(10, 20, 5) = %d\n", max(10, 20, 5));

    return 0;
}
