#include<stdio.h> //stdio
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf("You are an adult\n") :
    (age >= 13 && age < 18 ? printf("teenager\n") : printf("You are a child\n"));
    return 0;
}