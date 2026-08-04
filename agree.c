#include<stdio.h>

int main(void)
{
    char c;

    printf("Do you agree? ");
    scanf("%c", &c);

    if (c == 'y' || c =='Y')
    {
       printf("Agreed.\n");
    }
    

    else if (c == 'n' || c == 'N')
    {
        printf("Disagreed. \n");
    }
   
    else
    {
        print("I don't know.\n");
    }

return 0;


}