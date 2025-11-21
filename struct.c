#include <stdio.h>
#include <stdio.h>
#include <string.h>
struct student 
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age = 19;
    s1.marks = 88.8;
    strcpy(s1.name, "ekans");
     
    struct student s2;
    strcpy(s2.name,"lik");
    s2.age = 20;
    
    struct student s3 = {"ekans",88,99};

    printf("%s", s3.name);
    printf("%d",s3.age);
}