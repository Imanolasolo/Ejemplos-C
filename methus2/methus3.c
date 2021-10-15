#include<stdio.h>
#include<stdlib.h>

int main()
{
/*Declare variables*/
int methus;
int you;
char years[8];
/*First question, get value and 
convert in integer in You variable*/
printf("How old are you?");
gets(years);
you=atoi(years);
/*Second question, get value and 
convert it in integer in methus variable*/
printf("How old was Metuselah?");
gets(years);
methus=atoi(years);
/*Print the answer of questions 
with return 0 to the main function*/
printf("You are %d years old.\n",you);
printf("Metuselah was %d years old.\n",methus);
return(0);
}