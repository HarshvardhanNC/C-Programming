/*
     1234321
     123 321
     12   21  n=4
     1     1
*/
#include<stdio.h>
int main()
{
   int n;
   int nst=n-1;
   int nsp=1;
   printf("Enter n\n");
   scanf("%d",&n);
   int m=n;
   int c=1;
    for(int i=1;i<=2*n-1;i++)
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
   for(int i=1;i<=n-1;i++)
   {
     for(int j=1;j<=nst;j++)
     {
          printf("%d",j);
     }
     for(int k=1;k<=nsp;k++)
     {
          printf(" ");
     }
     int a=m-1;
     for(int j=1;j<=nst;j++)
     {
          printf("%d",a);
          a--;
     }
     m--;
     printf("\n");
     nst--;
     nsp+=2;
   }
   return 0;
}
