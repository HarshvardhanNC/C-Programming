/*
       *
      ***
     *****  n=5
      ***
       *
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=nst;j++)      
        {
            printf("*");
        }
        if(i<(n+1)/2)
        {
           nsp--;
           nst+=2;
        }
        else
        {
           nsp++;
           nst-=2;
        }
        printf("\n"); 
    }
    return 0;
}