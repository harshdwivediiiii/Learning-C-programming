#include <stdio.h>

int main() {
    int side;
    float radius;
    int length, breadth;

    printf("Enter the side of the square:\n");
    scanf("%d", &side);
    printf("The area of the square is %d\n", side * side);

    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    printf("The area of the circle is %.2f\n", 3.14 * radius * radius);

   printf("Enter the length and breadth of the rectangle:\n");
    scanf("%d %d", &length, &breadth);
    printf("The area of the rectangle is %d\n", length * breadth);
    return 0;
}
