#include<stdio.h>
void main()
{
    int a =90;
    int *p = &a;
    printf("a value is %d\n", a);
    printf("a adderss is %p\n", p);
    printf("p point to %d", *p);
}