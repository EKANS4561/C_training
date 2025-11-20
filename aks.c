#include <stdio.h>
 int mani ()
{
    int result = 1;
    int n, i;
    printf("enter the n:");
    scanf("%d",&n);
    for(i=1;1<=n; i++)
    {
        result = result*i;
    }
    printf("the product is : %d",result);
}