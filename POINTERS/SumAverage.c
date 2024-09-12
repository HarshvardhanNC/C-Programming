#include<stdio.h>
int* sum(int*,int*);
float* avg(int*,int*);
int main()
{
    int a,b;
    printf("ENTER NUMBERS\n");
    scanf("%d%d",&a,&b);
    printf("SUM WAS STORED AT %p\n",sum(&a,&b));
    printf("AVERAGE WAS STORED AT  %p",avg(&a,&b));  
    return 0;
}
int* sum(int* a,int* b)
{
    int sum=*a + *b;
    int* p=&sum;
    return p;
}
float* avg(int* a,int* b)
{
    float avg=(*a+*b)/2;
    float* p1=&avg;
    return p1;
}