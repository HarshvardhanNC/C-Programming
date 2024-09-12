#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,n1;
    char* ptr;
    printf("ENTER SIZE\n");
    scanf("%d",&n);
    getchar(); //Consume the leftover newline character from the input buffer
    ptr=(char*)calloc(n,sizeof(char));
    if(ptr==NULL)
    {
        printf("MEMORY ALLOCATION FAILED\n");
        return 1;
    }
    printf("ENTER THE STRING\n");
    fgets(ptr,n,stdin);
    printf("ENTERD THE STRING\n");
    puts(ptr);
    printf("REENTER SIZE\n");
    scanf("%d",&n1);
    getchar();
    ptr=(char*)realloc(ptr,n1*sizeof(char));//reallocation
    if(ptr==NULL)
    {
        printf("MEMORY ALLOCATION FAILED\n");
        return 1;
    }
    printf("ENTER THE STRING\n");
    fgets(ptr,n1,stdin);
    printf("ENTERD THE STRING\n");
    puts(ptr);
    free(ptr);
    return 0;
}