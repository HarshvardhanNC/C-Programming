/*
    12345
  1 *   *
  2  * * 
  3   *      n=5
  4  * * 
  5 *   *
    
*/
#include<stdio.h>
int main()
{
    int n,j,i;
    printf("ENTER NO OF ODD TERMS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||i+j==n+1)
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}