#include<stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE ");
    scanf("%d",&age);
    if(age<=14)
    {
        printf("YOU ARE KID \n");
    }
    else if(age>14&&age<=18)
    {
        printf("YOU ARE TEEN \n");
    }
    else if(age>18&&age<=50)
    {
        printf("YOU ARE ADULT \n");
    }
    else
    {
          printf("YOU ARE OLD \n");
    }
    return 0;

    
}