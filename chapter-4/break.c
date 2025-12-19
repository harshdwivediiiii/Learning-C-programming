#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0) {
            break;   // stop when multiple of 7 is entered
        }

    } while (1);

    printf("end");
    return 0;
}
