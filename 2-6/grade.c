// In grade.c
#include <stdio.h>

int main(void) {
    int grade = /* arbitrary initialiaztion of grade */;
    char letter = 'f';    /* by default... */

    if (grade >= 90) {
        letter = 'a';
    }
    else  if (grade >= 80) {
        letter = 'b';
    }
    else  if (grade >= 70) {
        letter = 'c';
    }
    else if (grade >= 60) {
        letter = 'd';
    }
    else
    {
        letter = 'f';
    }
    
    printf("%c\n", letter);
    return 0;
}

