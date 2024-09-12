// 153 = SUM OF CUBE OF DIGITS = 1+125+27 =153
#include<stdio.h>
int main()
{
    int n=153;
    int og=n;
    int rem,sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(sum==og)
    {
        printf("ARMSTRONG NUMBER\n");
    }
    else
    {
        printf("NOT AN ARMSTRONG NUMBER\n");
    }
    return 0;
}