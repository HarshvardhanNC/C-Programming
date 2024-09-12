/*
     1234321
     123 321
     12   21  n=4
     1     1
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    int nst=n-1;
    int nsp=1;
    int m=n;
    int c=1;
    for(i=1;i<=2*n-1;i++)
    {
        printf("%d",c);
        if(i<n)
        {
            c++;
        }
        else
        {
           c--;
        } 
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
    {
        int a=1;
        for(j=1;j<=nst;j++)
        {
            printf("%d",a);
            a++;
        }
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        int b=m-1;
        for(j=1;j<=nst;j++)
        {
            printf("%d",b);
            b--;
        }
        m--;
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
