// program to print fibonacci series up to n terms
#include <stdio.h>
int main(){
    int n,i, num1 = 0, num2 = 1, nextTerm;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i=1;i<=n;i++){
        printf("%d, ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }   
} 