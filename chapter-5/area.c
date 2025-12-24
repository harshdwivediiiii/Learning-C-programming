#include <stdio.h>
#include <math.h>

float sqaurearea(float side);
float rectanglearea(float length, float breadth);
float circlearea(float radius);

int main(){
    float side, length, breadth, radius;
    printf("Enter the side of square: ");
    scanf("%f", &side);
    printf("Enter the length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    printf("Area of square is %.2f\n", sqaurearea(side));
    printf("Area of rectangle is %.2f\n", rectanglearea(length, breadth));
    printf("Area of circle is %.2f\n", circlearea(radius));

    return 0;
}

float sqaurearea(float side){
    return side * side;
}
float rectanglearea(float length, float breadth){
    return length * breadth;
}

float circlearea(float radius){
    return 3.14 * radius * radius;
}