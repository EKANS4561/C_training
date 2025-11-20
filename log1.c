#include <stdio.h>
#include <string.h>
void main()
{
    char name [10] = "akshay";
    char new[100]= "hello" ;
    printf("%c", name[8]);
    printf("length of string is %d\n",strlen(name));
    strcat(new, name);
    printf("%s",new);    
}