#include <stdio.h>
#include <string.h>
void main()
{
    char des [100] ="bad boys" ;
    char se [10] = "bad" ;
    if((strstr(des,se)) != NULL)
    printf("found");
else
printf("not found");
}