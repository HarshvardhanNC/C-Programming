/*      Files modes 
 r: open the exiting file for reading
 w: open a file for writing , create one if doesn't exits
 a: open a file for writing in appending mode & create one if doesn't exits
 r+: open a file for reading and writing both
 w+: same but if file already exits , it will clear the content and create if doesn't exits 
 a+: same but doesn't clear content it will append at end

       fprintf , fscanf , fgets , fputs
*/
// I was a way to store data before DBMS
#include<stdio.h>
int main()
{
    FILE* ptr;
    ptr=fopen("abc.txt","r"); // opening an exiting file 
    char ch[100];
    while(fgets(ch,100,ptr)!=NULL) // printing all data
    {
        printf("%s",ch);
    }
    fclose(ptr);
    ptr=fopen("xyz.txt","w");
    char str[]="THIS IS FILE HANDLING";
    fputs(str,ptr); // inserting data
    fclose(ptr);
    return 0;

}