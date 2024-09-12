#include<stdio.h>
int main()
{
    int a=5;
    int* ptr1=&a;
    int** ptr2;
    ptr2=&ptr1;
    printf("VALUE OF a IS %d\n",a);
    printf("VALUE OF a IS %d\n",*ptr1);
    printf("VALUE OF a IS %d\n",**ptr2);

    printf("ADDRESS OF a IS %d\n",&a);
    printf("ADDRESS OF a IS %d\n",ptr1);
    printf("ADDRESS OF ptr1 IS %d\n",&ptr1);
    printf("ADDRESS OF ptr1 IS %d\n",ptr2);
    return 0;
}