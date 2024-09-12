#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="HARSH";
    int count =0;
    for (int i = 0; i < strlen(c); i++)
    {
        if(c[i]=='H')
        {
            count++;
        }
    }
    printf("OCCURENCE OF CHARACTER IS %d\n",count);
    return 0;
}