#include<stdio.h>
void name(char first[], char last[] , int swa)
{
    int i = 0;
    char full[100];
    while (first[i]!= '\0')
    {
        full[i] = first[i];
        i++;
    }
    full[i] = ' ';
    i++;
    int j =0;
    while (last[j]!= '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    } 
    printf("%s",full);
    int len =i+1;
    if(len<swa)
    printf("fits in the screen");
else
printf("does not fit in the screen");

}

int main()
{
    char first[100] = "aks";
    char last[100] ="lik";
    int swa =6;
    name(first, last , swa);
    return 0;
}