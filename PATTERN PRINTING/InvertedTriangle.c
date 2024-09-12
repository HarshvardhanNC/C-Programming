/*
   1  *****
   2   ****
   3    ***   n=5
   4     **
   5      *
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    int nsp=0;
    int nst=n;
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
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}