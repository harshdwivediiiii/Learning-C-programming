#include<stdio.h>
int main() {
    char day;
    printf("Enter a day (M/T/W/H/F/S/U): ");
    scanf(" %c", &day);
    switch(day) {
        case 'M':
            printf("Monday\n");
            break;
        case 'T':
            printf("Tuesday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'H':
            printf("Thursday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        case 'S':
            printf("Saturday\n");
            break;
        case 'U':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    return 0;
}