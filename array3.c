// write a c function which will accept  and arr ,size n, and return different between first and last number 
#include <stdio.h>
#include <stdlib.h>
int sub_arr (int arr[], int n)
{
    int sub =arr [0] - arr[n-1];
    return abs (sub);
}
void main()
{
    int arr[5] = {8,9,6,8};
    int n = 5;
    printf("%d",sub_arr(arr,n));
}