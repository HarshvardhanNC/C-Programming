#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NO OF ROWS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1)-i;j++) //n=4 | i=1,j=4 ; i=2,j=3...
        {
            printf("*");
        }printf("\n");
    }
    return 0;
}
/*

   n=4
 i      j  i+j=5(n+1)
 1 **** 4  j=(n+1)-i
 2 ***  3  
 3 **   2
 4 *    1

*/
