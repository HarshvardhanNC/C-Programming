/*
      12345 j
 i 1  1
   2  01      n=5
   3  101
   4  0101
   5  10101
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            printf("1");
            else
            printf("0");
        }printf("\n");
    }
    return 0;
}