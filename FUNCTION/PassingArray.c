// WAP to sum the elements in array
#include<stdio.h>
int sum(int[], int);// NO NEED TO DECLARE SIZE
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
    printf("SUM OF ELEMENTS OF ARRAY IS %d",sum(arr,n));
    // &arr[0] = arr , Pass by Reference
    return 0;
}
int sum(int a[],int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}