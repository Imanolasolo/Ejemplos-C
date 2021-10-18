#include<stdio.h>
#include<stdlib.h>

int main()
{
    char weight[4];
    int w;
    
    printf("Enter your weight:");
    gets(weight);
    w=atoi(weight);
    printf("Here is what you weigh now: %d\n",w);
    w=w+1;
    printf("Your weight after the potatoes: %d\n",w);
    w=w+1;
    printf("Here you after the mutton: %d\n",w);
    w=w+8;
    printf("And your weight after dessert: %d pounds!\n",w);
    printf("LARDO!\n");
    return(0);
    }