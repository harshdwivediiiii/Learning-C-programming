//use library function to compute square of a number
#include <stdio.h>
#include <math.h>

int CalculateSquare(int num); //function declaration/

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is %d", num, CalculateSquare(num));
    return 0;
}

int CalculateSquare(int num) //function definition
{
    return pow(num, 2);
}