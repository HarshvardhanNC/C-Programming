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
    return 0; // IF CONDITION FALSE , 
             // DIRECTLY JUMP TO NEXT COMMAND BLOCK(return 0;)
}