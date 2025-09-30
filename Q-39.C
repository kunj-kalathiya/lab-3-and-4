/// This program calculates the sum of the series 1/1! + 2/2! + 3/3! + ... + n/n! for a given n.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, i = 1, fact = 1;

    printf("Enter number up to sum of sequence: ");
    scanf("%d", &n);

    while (i <= n) {
        fact = fact * i;
        sum = sum + i / fact;
        i++;
    }

    printf("Sum = %f\n", sum);

    return 0;
}