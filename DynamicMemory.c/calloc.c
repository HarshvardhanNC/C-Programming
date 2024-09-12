/*
Allocates and initializes memory to zero. Safer for use cases where 
you require all values to be zero, but slightly slower due to initialization.
Preferred when you need zero-initialized memory 
(e.g., when dealing with arrays or structures where you want default values to be zero).
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n;
    int* ptr;
    printf("ENTER SIZE OF AN ARRAY\n");
    scanf("%d", &n);
    ptr = (int*)calloc(n,sizeof(int));
 //for float , float* ptr ; ptr = (float*)calloc(n,sizeof(float))
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("ENTER ELEMENTS\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
        }
        printf("ENTERED ELEMENTS :\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", ptr[i]);
        }
        free(ptr);
        return 0;
}