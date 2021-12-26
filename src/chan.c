#include <stdlib.h>
#include <stdio.h>

int sub(int x, int y) {
    return 2*x + y;
}

int main(int argc, char ** argv) {
    int a;
    a = atoi(argv[1]);
    printf("%d\n",sub(argc, a));

    return 0;
}
