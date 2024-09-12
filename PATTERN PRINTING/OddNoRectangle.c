#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=n;j++)
        {
            printf("%d",a);
            a+=2;
        }printf("\n");
    }
}