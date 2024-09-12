/*
     1
    123   n=3
   12345
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=nsp;j++)
      {
        printf(" ");
      }
      for(k=1;k<=nst;k++)
      {
        printf("%d",k);
      }
      nst+=2;
      nsp--;
      printf("\n");
    }
    return 0;
}