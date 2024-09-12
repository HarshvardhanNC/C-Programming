#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,n1;
    int lower=0,upper=10;
    srand(time(NULL));
    n=(rand()%(upper-lower+1))+lower;
    do
    {
       printf("GUESS THE NUMBER BETWEEN 0 TO 10\n");
       scanf("%d",&n1);
       if(n1>n)
       {
        printf("LOWER NUMBER PLEASE\n");
       }
       else if(n1<n)
       {
        printf("HIGHER NUMBER PLEASE\n");
       }
    }while (n1!=n);
    
    printf("CONGO YOU HAVE GUESSED THE RIGHT NUMBER");
    return 0;

}