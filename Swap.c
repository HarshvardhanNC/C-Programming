#include<stdio.h>
int main()
{
    int a,b,t;
    printf("ENTER VALUE OF a\n");
    scanf("%d",&a);
    printf("ENTER VALUE OF b\n");
    scanf("%d",&b);
    printf("BEFORE SWAPPING a = %d & b = %d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("AFTER SWAPPING a = %d & b = %d",a,b);
    return 0;
}