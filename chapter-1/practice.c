#include<stdio.h>
//area of square
int main() {
int side;
int radius;
printf("enter side \n");
printf("enter radius \n");
scanf("%d", &side);
scanf("%f", &radius);
printf("%d", side * side);
printf("%f", 3.14 * radius * radius);
return 0;