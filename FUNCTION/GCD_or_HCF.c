/* HCF OF 2 NO CAN NOT EXCEED THE LEAST NO 
   FOR EX ; HCF OF 12 & 60 ;
   12= 1,2,3,4,6,10,12
   60=1,2,3,4,5,6,10,12,15,20,30,60
   HCF IS "12" WHICH IS EQUAL TO LEAST NO 
   THAT IS 12 BETWEEN THEM
*/
#include<stdio.h>
int GCD(int,int);
int min(int,int);
int main()
{
    int a,b;
    printf("ENTER 1st NUMBER\n");
    scanf("%d",&a);
    printf("ENTER 2nd NUMBER\n");
    scanf("%d",&b);
    int hcf= GCD(a,b);
    printf("HCF OF TWO NO IS %d",hcf);
    return 0;
}
int GCD(int x,int y)
{
   int gcd=1;
   for(int i=min(x,y);i>=1;i--) 
   {
     if(x%i==0&&y%i==0)  // for(i=1;i<=min(x,y);i++)
     {                   // but this take time
        gcd=i;           // no break in upper logic
        break;
     }
   }
   return gcd;
}
int min(int x,int y)
{
    if(x<y)
    return x;
    else
    return y;
}