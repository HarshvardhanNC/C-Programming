#include<stdio.h>
int fact(int);
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
       return fact(n-1)*n;
    }
}
int main()
{
    int n;
    printf("ENTER NUMBER YOU WANT FACTORIAL OF\n");
    scanf("%d",&n);
    printf("FACTORAIL IS = %d",fact(n));
    return 0;
}