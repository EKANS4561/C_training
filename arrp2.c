#include<stdio.h>
void swap(float *b1, float*b2)
{
    printf("befor hacking: a has %fIb has %f",*b1,*b2);
    float temp = *b1;
           temp = *b2;
           *b2 = temp;
}
void main()
{
    float b1,b2;
    printf("enter *b1,*b2 :");
    printf("%f%f", &b1,&b2);
}