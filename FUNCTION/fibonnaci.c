// 0,1,1,2,3,5,8,13
#include<stdio.h>
int main()
{
    int n1=0,n2=1;
    int n;
    printf("ENTER NO OF TERMS\n");
    scanf("%d",&n);
    int sum=0;
    printf("%d\n%d\n",n1,n2);
    for(int i=1;i<=n-2;i++)
    {
       int sum=n1+n2;
       n1=n2;
       n2=sum;
       printf("%d\n",sum);
    }
    return 0;
}