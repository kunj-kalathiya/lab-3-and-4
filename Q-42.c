// read n and print n is prime or composite
#include <stdio.h>
int main(){
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
    }
    for(i=2; i<n; i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is a composite number.\n", n);
    return 0;
}