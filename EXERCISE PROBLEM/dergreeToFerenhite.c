#include<stdio.h>
int main()
{
    float t,a;
    printf("ENTER DEGREE VALUE OF TEMPRETURE: \n");
    scanf("%f",&t);
    a=1.8*t+32;
    printf("THE FERENHITE VALUE OF TEMPRETURE IS %f",a);
    return 0;
}