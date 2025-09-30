// read number n and print factor of nial of n
#include <stdio.h>
int main(){
    int n,i, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }
}