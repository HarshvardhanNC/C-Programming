#include<stdio.h>
int main()
{
    int n=1234;
    int rem,sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("SUM OF DIGITS IS %d\n",sum);
    return 0;
}