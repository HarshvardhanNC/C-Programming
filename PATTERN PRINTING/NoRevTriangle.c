/* 
   n=4
i      j
1 1234 4  
2 123  3
3 12   2
4 1    1

*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NO ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1)-i;j++)
        {
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}