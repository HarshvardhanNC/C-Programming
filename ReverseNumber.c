#include<stdio.h>
int main()
{
    int n=1234;
    int og=n;
    int rem,rev=0;
    while(n!=0)
    {
        rem=n%10;// EXTRACT LAST DIGIT
        rev=rev*10+rem; // BUILDING REVERSE NUMBER
        n=n/10;// REMOVE USED LAST DIGIT
    }
    printf("ORIGINAL %d\n",og);
    printf("REVERSED %d",rev);
    return 0;
}