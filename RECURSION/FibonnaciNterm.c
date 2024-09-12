#include<stdio.h>
int fib(int n)
{
    if(n==1||n==2)
    {
        return n-1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    printf("ENTER Nth TERM\n");
    scanf("%d",&n);
    printf("%dth TERM OF FIBONACCI SERIES IS %d",n,fib(n));
    return 0;
}