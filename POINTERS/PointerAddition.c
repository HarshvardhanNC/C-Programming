#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int* p=a; // OR int* p=&a[0]
    printf("BASE ADDRESS OF ARRAY a : %d\n",&a[0]);
    printf("BASE ADDRESS OF ARRAY a : %d\n",a);
    printf("BASE ADDRESS OF ARRAY a : %d\n",p);// AT a[0]
    printf("VALUE AT POINTER : %d\n",*p);
    p=p+2; // p + 2*(SIZE OF INT)
    printf("ADDRESS OF POSITION : %d\n",p); // AT a[1]
    printf("VALUE AT POINTER : %d\n",*p); 
    *p=33; // UPDATING ARRAY
    for(int i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}