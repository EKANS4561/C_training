#include <stdio.h>

float volume(float l, float b, float h) 
{
    return l * b * h;   // formula for volume
}

int main() 
{
    float l, b, h, v;

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter breadth: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &h);

    v = volume(l, b, h); // function call

    printf("Volume of the cuboid = %.2f\n", v);

    return 0;
}
