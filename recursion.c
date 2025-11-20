#include <stdio.h>
void display(int n)
{
    if(n>10)
    return;
    printf("%d", n);
    display(n+1);
}
void main()
{
    display(8);
}