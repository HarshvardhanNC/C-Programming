#include<stdio.h>
int main()
{
    int a[5]={11,22,33,44,55};
    int* p=&a[2];
    printf("BASE ADDRESS OF ARRAY a: %d\n",&a[2]);
    printf("BASE ADDRESS OF ARRAY a: %d\n",p); // AT a[2]
    printf("VALUE AT POINTER: %d\n",*p);
    p=p-2; // p - 2*(SIZE OF INT)
    printf("ADDRESS OF POSITION: %d\n",p); // AT a[0]
    printf("VALUE AT POINTER: %d\n",*p); 

    int* q=&a[4];
    printf("VALUE AT POINTER : %d\n",*q);
    printf("DIFFERENCE BETWEEN POINTERS: %d\n",q-p);//ONLY IN SUB
    // ONLY FOR POINTER IN SAME ARRAY 
    return 0;
}