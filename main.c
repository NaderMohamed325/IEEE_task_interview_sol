
#include <stdio.h>

int main() {
    int number, spare;

    printf("Enter the number: ");
    scanf("%i", &number);

    spare = number;
    int counter = 0;

    while (number > 0) {
        if (number % 2 != 0) {
            counter++;
        }
        number /= 2;
    }

    printf("The number of set bits in %i is equal to %i", spare, counter);

    return 0;
}
--------------------------------------------------------


int main() {
    int n;
    scanf("%i", &n);
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    printf("%i",count);
}
