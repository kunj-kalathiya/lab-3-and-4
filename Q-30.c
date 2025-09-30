// program to reverse a given number
#include <stdio.h>
int main() {
    int num, q,i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; num != 0; num = num / 10) 
    {
        q = num % 10;
        printf("%d", q);
    }
    
    
}