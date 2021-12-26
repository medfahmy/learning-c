#include <stdio.h>

int main() {
    unsigned long long int i;
    i = 0xfffffff;
    printf("%.x, %.x\n", i, sizeof(i));

    return 0;
}
