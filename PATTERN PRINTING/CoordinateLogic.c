/*
   i  12345 j
   1  ##*## 
   2  ##*##   n=5 (ONLY ODD IS APPLICABLE)
   3  *****   n=5; 3 is the middle coordinate
   4  ##*## 
   5  ##*## 
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER ODD NO OF TERMS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(i==(n+1)/2||j==(n+1)/2)
           {
             printf("*");
           }
           else
           {
             printf("#");
           }
        }printf("\n");
    }
    return 0;
}