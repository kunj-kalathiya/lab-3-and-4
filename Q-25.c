// program to print table of a number 
#include <stdio.h>  
int main()  
{  
    int n, i;  
    printf("Enter a number: ");  
    scanf("%d", &n);         
    printf("Table of %d is:\n", n);  
    for(i = 1; i <= 10; i++)    
    {  
        printf("%d", n * i);  
        printf("\n");
    }  
    
}