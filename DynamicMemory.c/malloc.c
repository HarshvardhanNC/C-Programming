// malloc(): Allocates memory without initialization. 
// Faster, but the memory contains garbage values.
// Preferred when you want to allocate memory quickly and do not need it to be initialized
//  (e.g., if you'll immediately overwrite the memory with new data).
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *p;
    printf("ENTER SIZE OF AN ARRAY\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }
        printf("ENTER ELEMENTS\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]);
        }
        printf("ENTERED ELEMENTS :\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", p[i]);
        }

        free(p);// MUST TO DO 
        
        return 0;
    }