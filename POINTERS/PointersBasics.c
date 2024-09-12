#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    p=&a;            
    int b=10;    
    int *p1=&b;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",*p);//THIS IS DEREFERENCING OPERATOR
    printf("%p\n",&p);// POINTER'S OWN ADDRESS
    printf("%d\n",b);
    *p1=11; // ACCESSING ELEMENT 
    printf("%d\n",b);
    return 0;
}
/* Dereferencing operator ne aapn pointer 
   ne jya location la point kelay tya 
   location chi value access karta yete
*/