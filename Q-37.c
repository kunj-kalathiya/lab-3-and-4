// program to print number 2,4,6,8...n

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for(i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

}