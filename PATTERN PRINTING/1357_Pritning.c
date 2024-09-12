#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        a=a+2;
    }
    return 0;
}
// IF WE PUT a=2 ; OUTPUT: 2 4 6 8 10....
