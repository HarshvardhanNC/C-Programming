/*
     *******
     *** ***
     **   **  n=4
     *     *
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    int nst1=n-1;
    int nst2=n-1;
    int nsp=1;
    for(i=1;i<=2*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
    {
    for(j=1;j<=nst1;j++)
    {
        printf("*");
    }
    for(k=1;k<=nsp;k++)
    {
        printf(" ");
    }
    for(j=1;j<=nst2;j++)
    {
        printf("*");
    }
    nst1--;
    nst2--;
    nsp+=2;
    printf("\n");
    }
    return 0; 
}
