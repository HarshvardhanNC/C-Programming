#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    printf("LENGTH OF ARRAY IS %d",sizeof(a)/sizeof(a[0]));
    return 0;
}