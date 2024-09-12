#include<stdio.h>
void change(int[], int);
int main()
{
    int n;
    printf("ENTER SIZE OF AN ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ELEMENTS OF AN ARRAY\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ELEMENTS OF AN ARRAY\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    change(arr,n); // ITS FUCKING PASS BY REF
    printf("\nCHANGED ELEMENTS OF AN ARRAY\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
void change(int a[],int s)
{
    for(int i=0;i<s;i++)
    {
        a[i]=a[i]*2;
    }
}