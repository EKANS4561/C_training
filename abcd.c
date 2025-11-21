// creat struter three varible name oy the car maximum speed .price store this in array of structer and display then#include <stdio.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    char speed;
    int price;
};
void main()
{
  int n;
    printf("enter the number of car:");
    scanf("%d", &n);

    struct car c[n];
    for(int i=0; i<n; i++)
    {
        printf("enter name of car:");
        scanf("%s",&c[i].name);

        printf("enter the speed:");
        scanf("%s",&c[i].speed);

        printf("enter the price:");
        scanf("%d",&c[i].price);
    }

    
}