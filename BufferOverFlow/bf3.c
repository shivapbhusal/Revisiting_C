#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "hello")==0)
    {
        printf ("\n Correct Password \n");
        pass = 1;

    }
    else
    {
        printf("\n Wrong Password \n");
    }

    if(pass)
    {
       /* Now Give root rights to user*/
        printf ("\nLogin Successful\n");
    }
    else {
        printf ("\n Login Failed \n");
    }

    return 0;
}
