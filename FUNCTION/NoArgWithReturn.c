#include<stdio.h>
int sum(void);
int main()
{
    int c = sum();
    printf("SUM IS %d",c);
    return 0;
}
int sum()
{
    int a,b;
    printf("ENTER NUMBERS\n");
    scanf("%d%d",&a,&b);
    return a+b;
}