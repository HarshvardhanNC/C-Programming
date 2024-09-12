#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("ELEMENTS :\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d\t", arr[i]);
        }
    int* p;
    p=arr; // p=&a[0]
    printf("\nELEMENTS :\n");
    for(int i =0;i<5;i++)
    {
        printf("%d\t",p[i]);
    }
    printf("\nELEMENTS :\n");
    for(int i =0;i<5;i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\nELEMENTS :\n");
    for(int i =0;i<5;i++)
    {
        printf("%d\t",*p);
        p++;
    }
    return 0;
}