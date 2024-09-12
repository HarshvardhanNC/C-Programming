#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("ENTER YOUR NUMBER\n");
    scanf("%d",&n);
    int og=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(og==rev)
    {
        printf("NUMBER IS PALINDROME\n");
    }
    else
    {
        printf("NUMBER IS NOT A PALINDROME\n");
    }
    return 0;
}