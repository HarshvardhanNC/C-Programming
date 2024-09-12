#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    printf("BASE ADDRESS OF ARRAY: %d\n",&a[0]);
    printf("BASE ADDRESS OF ARRAY: %d\n",a);
    printf("BASE ADDRESS OF ARRAY: %d\n",&a);// a is const pointer it does not have any seperate location
    
    printf("VALUE AT BASE ADDRESS OF ARRAY: %d\n",*(&a[0]));
    printf("VALUE AT BASE ADDRESS OF ARRAY: %d\n",*(a));
    printf("VALUE AT BASE ADDRESS OF ARRAY: %d\n",a[0]);
    printf("VALUE AT BASE ADDRESS OF ARRAY: %d\n",*(&a[2]));
    printf("VALUE AT BASE ADDRESS OF ARRAY: %d\n",*(a + 2));
    printf("VALUE AT BASE ADDRESS OF ARRAY: %d\n",a[2]);
    return 0;
}