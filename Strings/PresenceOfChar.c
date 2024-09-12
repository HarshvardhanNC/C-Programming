#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="HARSH";
    int presence =0;
    for (int i = 0; i < strlen(c); i++)
    {
        if(c[i]=='S')
        {
            presence=1;
            break;
        }
    }
    if(presence)
    {
        printf("CHARACTER IS PRESENT\n");
    }
    else
    {
        printf("CHARACTER IS NOT PRESENT\n");
    }
    return 0;
}