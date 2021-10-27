#include<stdio.h>

int main()
{
    char c;
    printf("Would you like your computer to explode Y/N?");
    c=getchar();
    if(c=='N'||c=='n')
    {
        printf("Okay. Phiuuuu!\n");
    }
    else
    {
        printf("Ok, configuring computer to explode now.\n");
        printf("Bye.\n");
    }
    return(0);
}
