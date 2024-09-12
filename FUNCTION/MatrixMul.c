#include <stdio.h>
#define MAX 10
void product(int[MAX][MAX], int[MAX][MAX], int, int, int, int);
int main()
{
    int r1, c1, r2, c2;
    printf("ENTER ROWS AND COLUMNS FOR 1st\n");
    scanf("%d%d", &r1, &c1);
    printf("ENTER ROWS AND COLUMNS FOR 2nd\n");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("MULTIPLICATION NOT POSSIBLE\n");
    }
    else
    {
        int a[MAX][MAX], b[MAX][MAX];
        printf("ENTER ELEMENTS FOR 1st\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("ENTER ELEMENTS FOR 2nd\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("FIRST ARRAY\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("SECOND ARRAY\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        printf("MULTIPLICATION IS :\n");
        product(a, b, r1, c1, r2, c2);
    }
    return 0;
}
void product(int a[MAX][MAX], int b[MAX][MAX], int r1, int c1, int r2, int c2)
{
    int c[MAX][MAX];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
