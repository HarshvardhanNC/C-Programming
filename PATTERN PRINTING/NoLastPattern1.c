/*
     1234567
     123 567
     12   67  n=4
     1     7
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    int p=n+1;
    int nst=n-1;
    int nsp=1;
    for(i=1;i<=2*n-1;i++)
    {
      printf("%d",i);
    }
    printf("\n");
    for (i=1;i<=n-1;i++)
    {
    for(j=1;j<=nst;j++)
    {
        printf("%d",j);
    }
    for(k=1;k<=nsp;k++)
    {
        printf(" ");
    }
    int a=p;
    for(j=1;j<=nst;j++)
    {
        printf("%d",a);
        a++;
    }
    p++;
    nst--;
    nsp+=2;
    printf("\n");
    }
    return 0;
}

