/*
   1
   23   n=3
   456
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++) 
        {
            printf("%d",a);
            a++;
        }printf("\n");
    }
    return 0;
}