#include <stdio.h>
void reverse(int[],int);
void reverse(int x[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = x[i];
        x[i] = x[n - i - 1];
        x[n - i - 1] = temp;
    }
}
int main()
{
    int n;
    printf("ENTER ARRAY LENGTH\n");
    scanf("%d",&n);
    int a[n];
    printf("ENTER ELEMENTS OF ARRAY\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("ORIGINAL ARRAY :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    reverse(a, n);
    printf("\nREVERSED ARRAY :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}