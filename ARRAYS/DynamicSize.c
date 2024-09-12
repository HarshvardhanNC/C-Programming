#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("ENTER SIZE OF ARRAY\n");
    scanf("%d",&n);
    int* arr;
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("UNABLE TO ALLOCATE MEMORY\n");
        return 1;
    }
    printf("ENTER YOUR ARRAY\n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d\t",&arr[i]);
    }
    printf("YOUR ARRAY\n");
    for (int i = 0; i < n; i++)
    {
       printf("%d\t",arr[i]);
    }
    free(arr);
    return 0;
}