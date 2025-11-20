#include<stdio.h>
void main()
{
    int arr[4] = {45,56,78,99};
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
}