#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER VALUE OF a\n");
    scanf("%d",&a);
    printf("ENTER VALUE OF b\n");
    scanf("%d",&b);
    printf("BEFORE SWAPPING a = %d & b = %d\n",a,b);
    a=a+b;
    b=a-b;  // can you * and / also
    a=a-b;
    printf("AFTER SWAPPING a = %d & b = %d",a,b);
    return 0;
}