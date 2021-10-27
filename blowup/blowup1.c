#include<stdio.h>

int main()
{
    char c,d;
    printf("Enter the character code for self-destruct?");

    c=getchar();
    fflush(stdin);
    
    printf("Input number code to confirm self-destruct?");
    d=getchar();
    if(c=='G' && d=='O') 
    {
        printf("AUTO DESTRUCT ENABLED\n");
        printf("Bye.\n");
    }
    else
    {
        printf("Ok, Fiuuu.\n");
    }
    return(0);
}