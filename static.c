#include<stdio.h>

void countCalls() {
    static int count = 0; // Static variable, retains its value between function calls
    count++;
    printf("This function has been called %d times\n", count);
}

int main() {
    countCalls(); // Output: This function has been called 1 times
    countCalls(); // Output: This function has been called 2 times
    countCalls(); // Output: This function has been called 3 times
    return 0;
}

/* STATIC VARIABLE CAN BE INTIALIZED ONLY ONCE
   AND HERE IT WILL NOT BECOME 0 EVERYTIME
   IT WILL HAVE ITS PREVIOUS UPDATED VALUE
   ALSO STATIC VARAIBLES MAINTAIN THEIR VALUES
   ACROSS FUNTION CALL THAT MEANS THEY ARE NOT ERASED
   AFTER CALL 
*/