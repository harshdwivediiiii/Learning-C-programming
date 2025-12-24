#include <stdio.h>

/*
  Function declaration / prototype
  sum(int a, int b)
  - a and b are PARAMETERS (arguments received by the function)
*/
int sum(int a, int b);

/*
  printTable(int n)
  - n is a PARAMETER that receives a value from main()
*/
void printTable(int n);

int main() {
    int a, b, n;   // variables declared in main()

    // Taking first number input
    printf("Enter number: ");
    scanf("%d", &a);

    // Taking second number input
    printf("Enter number: ");
    scanf("%d", &b);

    /*
      Function call:
      sum(a, b)
      - a and b are ARGUMENTS
      - Their values are copied into parameters a and b of sum()
    */
    int s = sum(a, b);

    // Printing the returned value from sum()
    printf("Sum: %d\n", s);

    // Taking number for multiplication table
    printf("Enter number to print table: ");
    scanf("%d", &n);

    /*
      Function call:
      printTable(n)
      - n is passed as an ARGUMENT
      - Value of n is copied into parameter n of printTable()
    */
    printTable(n);

    return 0;
}

/*
  Function definition of sum
  - a and b are PARAMETERS
  - They receive values from main()
*/
int sum(int a, int b) {
    return a + b;   // returns sum to main()
}

/*
  Function definition of printTable
  - n is a PARAMETER
  - Used to generate multiplication table
*/
void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
