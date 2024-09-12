#include<stdio.h>
int main()
{
    int n;
    printf("ENTER AN NO.\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        goto even; 
    }
    else
    {
        goto odd;
    }
    even: // label
    printf("THE NO IS EVEN");
    return 0;
    odd:
    printf("THE NO IS ODD");
    return 0;
}