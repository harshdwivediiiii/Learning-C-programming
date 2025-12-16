// *Variables:
//             Variable is the name of a memory
//             location which stores some data.

// *Rules:
//             a. Variables are case sensitive
//             b. 1st character is alphabet or '_'
//             c. no comma/blank space
//             d. No other symbol other than '_'

// *Keywords:
//         Reserved words that have special
//         meaning to the compiler

#include <stdio.h>

int main() {
    int age = 10;
float pi = 3.14;
char grade = 'A';
    printf("a = %d\n", age);
    printf("pi = %f\n", pi);
    printf("grade = %c\n", grade);

    return 0;
}


//NOTE: C programming language does'nt have boolean and string 
// datatype.