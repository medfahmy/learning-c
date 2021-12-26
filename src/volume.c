#include <stdio.h>

#define PI 3.1415926535 

float sphere_volume(float r) {
    return (4 / 3) * PI * r * r * r;
}

int main(void) {
    float r;
    printf("enter the radius: ");
    scanf("%f", &r);
    printf("the volume of the sphere with such radius is %f\n", sphere_volume(r));
    return 0;
}
