#include <stdio.h>
void main()
{
    int t;
    int result=0;
    int q[3]={9,8,7};
    int c[3]={7,6,5};
    for (int i = 0; i<3; i++)
    {
        t = q[i]*c[i];
        result= result + t;
    }
    printf("total result is %d\n",result);
}