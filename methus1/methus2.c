#include<stdio.h>
#include<stdlib.h>

int main()
{
   int age;
    char years[8];

    printf("How old was Metuselah?");
    gets(years);
    age=atoi(years);
    printf("Metuselah was %d years old.\n",age);
    return(0);
}