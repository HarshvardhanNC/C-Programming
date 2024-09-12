#include<stdio.h>
int sum(int,int); 
int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d%d",&a,&b);
    int c = sum(a,b); 
    printf("SUM = %d",c);
    return 0;
}
int sum(int x,int y) 
{
    return x+y;
}