#include <stdio.h>

int main() {
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    // Bitwise AND - checks last bit
    if (number & 1) {
        printf("%d is ODD.\n", number);
    } else {
        printf("%d is EVEN.\n", number);
    }

    return 0;
}
