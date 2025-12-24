#include <stdio.h>

void printHW( int count); // Function declaration/prototype
int main(){
    printHW(5); // Function call
    return 0;
}
void printHW( int count) { // Function definition
    if (count == 0) {
        return; // Base case: do nothing when count reaches 0
    }
    printf("Hello, World!\n");
    printHW(count - 1); // Recursive call with decremented count
}