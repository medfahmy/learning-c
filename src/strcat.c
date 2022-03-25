#include <stdio.h>
#include <string.h>

void strcat(char* dest, char* src) {
    while (*dest) dest++;
    while (*dest++ = *src++);
}

int main(void) {
    char src[50], dest[50];
    
    strcpy(src, "source");
    strcpy(dest, "dest");
    
    strcat(dest, src);
    strcat(dest, src);

    // strcat(*s2, s1);
    printf(dest);

    return 0;
}
