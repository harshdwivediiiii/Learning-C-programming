#include <stdio.h>

int main() {

    // FOR LOOP
    printf("For Loop Example:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n\n");

    // WHILE LOOP
    printf("While Loop Example:\n");
    int j = 1;
    while(j <= 5) {
        printf("%d ", j);
        j++;
    }

    printf("\n\n");

    // DO-WHILE LOOP
    printf("Do-While Loop Example:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while(k <= 5);

    return 0;
}
