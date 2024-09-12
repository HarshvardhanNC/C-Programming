/*
   0        1      iCj=0C0=1
   1       1 1     iCj=1C0=1,1C1=1
   2      1 2 1    iCj=2C0=1,2C1=2,2C2=1
   3     1 3 3 1
   4    1 4 6 4 1

        0 1 2 3 4   
*/
#include<stdio.h>
int combination(int,int);
int fact(int);
int main()
{
    int i,j,k,n;
    int nst=1,nsp=n-1;
    printf("ENTER NO OF TERMS\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(j=0;j<nst;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
        nst++;
        nsp--;
    }
    return 0;
}
int combination(int a,int b)
{
    return fact(a)/(fact(b)*fact(a-b));
}
int fact(int x)
{
    int fac =1;
    for(int i=2;i<=x;i++)
    {
        fac=fac*i;
    }
    return fac;
}
