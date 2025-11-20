// write a function which acpet one input parameter r and  return the peremeter of circle diclear constanv#include 
#include <stdio.h>

#define PI 3.14159   
float perimeter(float r)
{
    return 2 * PI * r;   
}

int main() {
    float radius, result;

    printf("Enter radius: ");
    scanf("%f", &radius);

    result = perimeter(radius); 

    printf("Perimeter of circle = %.2f\n", result);

    return 0;
}
