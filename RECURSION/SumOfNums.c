// 5 = 1+2+3+4+5 = (n-1)+n
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("ENTER NO OF TERMS\n");
    scanf("%d",&n);
    printf("SUM OF FIRST %d NUMBERS IS = %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return sum(n-1)+n;
    }
}