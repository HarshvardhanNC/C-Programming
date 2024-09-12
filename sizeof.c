#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(bool));
    printf("%lu\n",sizeof(4)); // INT SO 4
    printf("%lu\n",sizeof("HELLO")); // LENGTH + 1(\0)
    printf("%lu\n",sizeof('A')); // INT(64) SO 4
    int a[]={1,3,4};
    printf("%lu\n",sizeof(a));
    /*
        %lu is unsigned int or unsigned long
    */
    return 0;
}
