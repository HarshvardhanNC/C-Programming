#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("ENTER NUMBERS\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
void sum(int x,int y)
{
    printf("SUM IS %d",x+y);
}