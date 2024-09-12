#include<stdio.h>
int main()
{
    char c[6]="HARSH";
    int len=0;
    while(c[len]!='\0')
    {
        len++;
    }
    printf("LENGTH OF STRING IS %d",len);
    return 0;
}