#include <stdio.h>

void namaste() ; // Function declaration/prototype
void bonjour() ; // Function declaration/prototype
int main (){
    printf("enter f for french or n for namaste:\n");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'f') {
        bonjour();  // Function call
    } else {
        namaste(); // Function call
    }
    return 0;
}

// Function definition
void namaste() {
    printf("Namaste!\n");
}

void bonjour() {
    printf("Bonjour!\n");
}