#include<stdio.h>
void sum(void);
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a,b;
    printf("ENTER NUMBERS\n");
    scanf("%d%d",&a,&b);
    printf("SUM IS %d",a+b);
}