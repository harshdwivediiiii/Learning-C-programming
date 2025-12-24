#include<stdio.h>

float convertTemp(float celsius) ;

int main(){
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Temperature in Fahrenheit: %.2f\n", convertTemp(celsius));

    return 0;
}

float convertTemp(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}