#include<stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE:\n ");
    scanf("%d",&age);
    printf("YOU HAVE ENTERED YOUR AGE AS %d \n",age);
    if(age>=18)
    {
        printf("YOU CAN VOTE");
    }
    else
    {
        printf("YOU CAN \'NOT\' VOTE");
    }
    return 0; 
}