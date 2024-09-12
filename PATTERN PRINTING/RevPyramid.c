/*
    1 *******
    2  *****  n=4
    3   ***
    4    *
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    int nst=2*n-1;
    int nsp=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=nst;k++)
        {
           printf("*");
        }
        nst-=2;
        nsp+=1;
        printf("\n");
    }
    return 0;
}   