#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("ENTER VALUE OF a\n");
    scanf("%d",&a);
    printf("ENTER VALUE OF b\n");
    scanf("%d",&b);
    printf("BEFORE SWAPPING a = %d & b = %d\n",a,b);
    swap(&a,&b);
    printf("AFTER SWAPPING a = %d & b = %d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int t=*x;
    *x = *y;
    *y = t;
}