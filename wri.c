\\ write a function two in put parameter x,y  and return x^2 and Y^2
#include <stdio.h>
int sol (int x, int y)
{
    int sum = x*x, y*y;
    return sum;
}
void main ()
{
    int x=15;
    int y=8;
    printf("%d\n", sol (x,y));
}