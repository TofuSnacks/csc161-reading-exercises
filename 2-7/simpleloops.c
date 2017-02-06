// In simpleloops.c
// Compile with -std=c11 flag so that variable-initialization in loops works

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i--) {
        printf("%d\n", i);
    }
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}


/*


   1. If I want to create a loop that iterates 10 times, what should I choose 
   for the initialization and test expressions?

   I would choose the first loop where I start at 0 and run while <10


   2.  If I want to create a loop that prints the values 0 through 10 in 
   increasing order, what should I choose for the initialization and test
   expressions?

   I would choose the second loop where i start at 0 and the run condition is <=10

   3.  If I want to create a loop that prints the values 10 through 0 in 
   decreasing order, what should I choose for the initialization and test 
   expressions?

   I would choose a loop starting at 10 and with the run condition >=0


 */
